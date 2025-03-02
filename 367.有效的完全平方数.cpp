/*
 * @lc app=leetcode.cn id=367 lang=cpp
 *
 * [367] 有效的完全平方数
 */

// @lc code=start
class Solution {
public:
    bool isPerfectSquare(int num) {
        unsigned long long left = 0, right = num;
        unsigned long long nowNum;
        bool rel = false;
        do{
            nowNum = (left + right) / 2;
            if (nowNum * nowNum < num) {
                left = nowNum + 1;
            } else if (nowNum * nowNum > num) {
                right = nowNum - 1;
            } else {
                rel = true;
                break;
            }
        }while (left <= right);
        return rel;
    }
};
// @lc code=end

