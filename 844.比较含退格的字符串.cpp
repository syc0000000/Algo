/*
 * @lc app=leetcode.cn id=844 lang=cpp
 *
 * [844] 比较含退格的字符串
 */

// @lc code=start
#include <string>
using namespace std;
class Solution {
  public:
    bool backspaceCompare(string s, string t) {
    unsigned short skip = 0;
    unsigned short si = s.size() - 1;
    unsigned short ti = t.size() - 1;
    while (si >= 0 || ti >= 0) {
      while (si >= 0) {
        if (s[si] == '#') {
          skip++;
        } else {
          if (skip) {
            si--;
            skip--;
          } else {
            break;
          }
        }
      }
      skip = 0;
      while (ti >= 0) {
        if (t[ti] == '#') {
          skip++;
        } else {
          if (skip) {
            ti--;
            skip--;
          } else {
            break;
          }
        }
      }
      skip=0;
      if (s[si] != t[ti]) {
        return false;
      }
    }
    return true;
    // return process(s) == process(t);
  }

  string process(string in) {
    string rel;
    for (char i : in) {
      if (i != '#') {
        rel.push_back(i);
      } else if (!rel.empty())
        rel.pop_back();
    }
    return rel;
  }
};
// @lc code=end

int main(){
  Solution s;
  s.backspaceCompare("string#s", "string#t");
}