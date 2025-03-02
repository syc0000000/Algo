/*
 * @lc app=leetcode.cn id=242 lang=cpp
 *
 * [242] 有效的字母异位词
 */

// @lc code=start
#include <string>
using namespace std;
class Solution {
public:
    bool isAnagram(string s, string t) {
        int ab[26] = {};
        for (char i : s) {
            ab[i-'a']++;
        }
        for (char i : t) {
            ab[i-'a']--;
        }
        for (int i : ab) {
            if (i) {
                return false;
            }
        }
        return true;
    }
};
// @lc code=end

