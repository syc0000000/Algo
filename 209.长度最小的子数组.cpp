/*
 * @lc app=leetcode.cn id=209 lang=cpp
 *
 * [209] 长度最小的子数组
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int first = 0,last =0,total = 0;
        int min = 999999999;
        for (; last<nums.size(); last++) {
            total+=nums[last];
            while (total-nums[first]>=target) {
                total-=nums[first];
                first++;
            }
            if (total >= target) {
                min = min<=(last-first+1)?min:(last-first+1);
            }
        }
        return min==999999999?0:min;
    }
};
// @lc code=end

