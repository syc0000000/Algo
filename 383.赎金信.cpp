/*
 * @lc app=leetcode.cn id=383 lang=cpp
 *
 * [383] 赎金信
 */

// @lc code=start
#include <string>
using namespace std;
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int ab[26] = {0};
        for (char c : magazine) {
            ab[c-'a']++;
        }
        for (char c : ransomNote) {
            if(--ab[c-'a'] < 0) return false;;
        }
        return true;
    }
};
// @lc code=end

