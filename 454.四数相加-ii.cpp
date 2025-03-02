/*
 * @lc app=leetcode.cn id=454 lang=cpp
 *
 * [454] 四数相加 II
 */

// @lc code=start
#include <vector>
#include <unordered_map>
using namespace std;
class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        unordered_map<int, int> AandB;
        for (int i : nums1) {
            for (int ii : nums2) {
                AandB[i+ii]++;
            }
        }
        unordered_map<int, int> CandD;
        for (int i : nums3) {
            for (int ii : nums4) {
                CandD[i+ii]++;
            }
        }
        int res = 0;
        for (auto pair : AandB) {
            if (CandD[0-pair.first]!=0) {
                res+= pair.second*CandD[0-pair.first];
            }
        }
        return res;
    }
};
// @lc code=end

int main(){
    Solution s;
    vector<int> nums = {1,2};
    s.fourSumCount(nums,nums,nums,nums);
}