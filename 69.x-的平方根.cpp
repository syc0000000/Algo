/*
 * @lc app=leetcode.cn id=69 lang=cpp
 *
 * [69] x 的平方根
 */

// @lc code=start
#include <vector>
using namespace std;
class Solution {
public:
  int mySqrt(int x) {
    unsigned long long left = 0, right = x;
    unsigned long long nowNum;
    do{
      nowNum = (left + right) / 2;
      if (nowNum * nowNum < x) {
        left = nowNum + 1;
      } else if (nowNum * nowNum > x) {
        right = nowNum - 1;
      } else {
        return nowNum;
      }
    }while (left <= right);
    return right;
  }
};
// @lc code=end
