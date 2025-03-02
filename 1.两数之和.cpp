/*
 * @lc app=leetcode.cn id=1 lang=cpp
 *
 * [1] 两数之和
 */

// @lc code=start
#include <vector>
#include <unordered_map>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        unordered_map<int, int> numIn;
        for (int i = 0; i<nums.size();i++) {
            numIn.emplace(nums[i],i);
        }
        for (int i = 0; i<nums.size(); i++) {
            if ( numIn.find(target-nums[i])!=numIn.end()&&numIn[target-nums[i]]!=i) {
                res.emplace_back(i);
                res.emplace_back(numIn[target-nums[i]]);
                return res;
            }
        }
        return res;
    }
};
// @lc code=end

int main(){
    Solution s;
    vector<int> t({3,2,4});
    s.twoSum(t, 6);
}