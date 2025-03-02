/*
 * @lc app=leetcode.cn id=15 lang=cpp
 *
 * [15] 三数之和
 */

// @lc code=start
#include <algorithm>
#include <vector>
using namespace std;
class Solution {
public:
  vector<vector<int>> threeSum(vector<int> &nums) {
    vector<vector<int>> res(0,vector<int>(nums.size()));
    sort(nums.begin(),nums.end());
    int i = 0;
    int first = 1;
    int last = nums.size()-1;
    while (i<nums.size()-2) {
      if (first>=last) {
        //对第一个数去重，即这个不能和上一个相同，否则没意义，
        //此时后面的代码要负责找出第一个数是这个数的情况下的 全部 解时才能这样干，否则有可能漏解
        do{i++;}
        while(nums[i]==nums[i-1]&&i<nums.size()-2);

        first=i+1;
        last = nums.size()-1;
        continue;
      }
      if (nums[i]+nums[first]+nums[last] == 0) {
        vector<int> tmp;
        tmp.emplace_back(nums[i]);
        tmp.emplace_back(nums[first]);
        tmp.emplace_back(nums[last]);
        res.emplace_back(tmp);
        //这里不能直接操作i++然后下一步，否则漏解（当一个i对应多组解时）
        //去重移动first
        do {
          first++;
        }while (nums[first] == nums[first-1]&&first<last);
        //去重移动last
        do {
          last--;
        }while (nums[last] == nums[last+1]&&first<last);

        continue;
      }else if (nums[i]+nums[first]+nums[last] > 0) {
        //去重移动last
        do {
          last--;
        }while (nums[last] == nums[last+1]&&first<last);

        continue;
      }else if (nums[i]+nums[first]+nums[last] < 0) {
        //去重移动first
        do {
          first++;
        }while (nums[first] == nums[first-1]&&first<last);

        continue;
      }

    }
    return res;
  }
};
// @lc code=end
int main(){
  Solution s;
  vector<int> v= {-2,0,0,2,2};
  s.threeSum(v);
}