/*
 * @lc app=leetcode.cn id=202 lang=cpp
 *
 * [202] 快乐数
 */

// @lc code=start
#include <unordered_set>
using namespace std;
class Solution {
public:
  bool isHappy(int n) {
    unordered_set<int> known;
    int newNum = 0;
    int oldNum = n;
    while (true) {
      while (oldNum / 10) {
        newNum += (oldNum % 10) * (oldNum % 10);
        oldNum /= 10;
      }
      newNum += oldNum * oldNum;
      if (newNum == 1) {
        break;
      }
      if (known.find(newNum) != known.end()) {
        return false;
      }else {
        known.emplace(newNum);
      };
      oldNum = newNum;
      newNum = 0;
    }
    return true;
  }
};
// @lc code=end

int main(){
    Solution s;
    s.isHappy(19);
}