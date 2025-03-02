/*
 * @lc app=leetcode.cn id=35 lang=cpp
 *
 * [35] 搜索插入位置
 */

// @lc code=start
#include <vector>
using namespace std;
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left = 0,right = nums.size();
        int result = -1;
        while (left<right) {
            int middle = (left+right)/2;
            if (nums[middle]>target) {
                right = middle;
            }else if (nums[middle]<target) {
                left = middle + 1;
            }else {
                result = middle;
                break;
            }
        }
        if (result == -1) {
            return right;
        }else {
            return result;
        }
    }
};
// @lc code=end

