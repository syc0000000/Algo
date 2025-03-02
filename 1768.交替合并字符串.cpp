/*
 * @lc app=leetcode.cn id=1768 lang=cpp
 *
 * [1768] 交替合并字符串
 */
#include <algorithm>
#include <iostream>
using namespace std;
#include <string>
// @lc code=start
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        auto len1 = word1.length();
        auto len2 = word2.length();
        int time = max(len1,len2);
        string res;
        int word1P = 0;
        int word2P = 0;
        for (int i = 0; i<time; i++){
            if(word1P<len1) res+=word1.at(word1P++);
            if(word2P<len2) res+=word2.at(word2P++);
        }
        cout<<res;
        return res;
    }
};
// @lc code=end
int main(){
    Solution s;
    cout << s.mergeAlternately("abc", "pqr") << endl;
    // cout<<"hello";
}
