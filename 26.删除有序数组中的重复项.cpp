/*
 * @lc app=leetcode.cn id=26 lang=cpp
 *
 * [26] 删除有序数组中的重复项
 */

// @lc code=start
#include <vector>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int slow = 0;
        int now = nums[0]-1;
        for (int fast : nums) {
            if (fast != now) {
                now = fast;
                nums[slow] = fast;
                slow++;
            }
        }
        return slow;
    }
};
// @lc code=end

