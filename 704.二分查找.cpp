/*
 * @lc app=leetcode.cn id=704 lang=cpp
 *
 * [704] 二分查找
 */

// @lc code=start
#include <vector>
using namespace std;
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0, right = nums.size() - 1;
        int result = -1;
        while (left <= right) {
            int middle = (left+right)/2;
            if (nums[middle]<target) {
                left = middle + 1;
            }else if (nums[middle]>target) {
                right = middle - 1;
            }else {
                result = middle;
                break; 
            }
        }
        return result;
    }
};
// @lc code=end

