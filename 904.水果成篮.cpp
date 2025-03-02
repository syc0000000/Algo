/*
 * @lc app=leetcode.cn id=904 lang=cpp
 *
 * [904] 水果成篮
 */

// @lc code=start
#include <bits/stdc++.h>
#include <vector>
using namespace std;
class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n = fruits[0];
        int last = 1, first = 0;
        int lzLast = fruits[1];
        int lzFirst = fruits[0];
        int maxLen = 2;
        last = 2;
        for (; last<fruits.size(); last++) {
            int lzOld = lzLast;
            lzLast = fruits[last];
            lzFirst = fruits[first];
            while (!(lzOld == lzLast || lzLast==lzFirst || lzOld == lzFirst)) {
                first++;
                lzFirst = fruits[first];
            }
            //到这里一定合法
            int len = last-first+1;
            if (len > maxLen) {
                maxLen = len;
            }
        }
        return maxLen;
    }
};
// @lc code=end

int main(){
    Solution s;
    vector<int> f = {0,1,2,2};
    s.totalFruit(f);
    return 0;
}