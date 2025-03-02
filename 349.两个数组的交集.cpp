/*
 * @lc app=leetcode.cn id=349 lang=cpp
 *
 * [349] 两个数组的交集
 */

// @lc code=start
#include <vector>
#include <unordered_set>
using namespace std;
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> in;
        unordered_set<int> res;

        for (int i : nums1) {
            in.insert(i);
        }
        for (int i : nums2) {
            if (in.find(i)!=in.end()) {
                res.emplace(i);
            }
        }
        return vector(res.begin(),res.end());
    }
};
// @lc code=end

