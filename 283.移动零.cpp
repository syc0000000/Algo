/*
 * @lc app=leetcode.cn id=283 lang=cpp
 *
 * [283] 移动零
 */

// @lc code=start
#include <vector>
using namespace std;
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int rel=0;
        for (int now : nums) {
            if (now != 0) {
                nums[rel] = now;
                rel++;
            }
        }
        for (; rel<nums.size(); rel++) {
            nums[rel]=0;
        }
    }
};
// @lc code=end

