/*
 * @lc app=leetcode.cn id=977 lang=cpp
 *
 * [977] 有序数组的平方
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        // cout<< nums.size();
        int first = 0,last = nums.size()-1;
        int n = nums.size();
        vector<int> res(n,0);
        int now = nums.size()-1;
        int f2 = 0;
        int l2 = 0;
        while (now >= 0 && last>=first) {
            f2 = nums[first] * nums[first];
            // if (f2>=0) {
            //     break;
            // }
            l2 = nums[last] * nums[last];
            if (f2 >= l2) {
                res[now] = f2;
                first++;
                now--;
            }else {
                res[now] = l2;
                last--;
                now--;
            }
        }
        return res;
    }
};
// @lc code=end

int main(){
    Solution s;
    vector<int> i = {-4,-1,0,3,10};
    s.sortedSquares(i) ;
    return 0;
}