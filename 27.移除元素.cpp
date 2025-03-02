/*
 * @lc app=leetcode.cn id=27 lang=cpp
 *
 * [27] 移除元素
 */

// @lc code=start
#include <vector>
using namespace std;
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int rel=0;
        for (int now : nums) {
            if (now != val) {
                nums[rel] = now;
                rel++;
            }
        }
        return rel;
    }
};
// @lc code=end

