/*
 * @lc app=leetcode.cn id=59 lang=cpp
 *
 * [59] 螺旋矩阵 II
 */

// @lc code=start
#include <bits/stdc++.h>
#include <vector>
using namespace std;
class Solution {
public:
  vector<vector<int>> generateMatrix(int n) {
    int num = n * n, height = n, width = n,x=0,y=0;
    vector<vector<int>> mat(n,vector<int>(n));
    int nn = 1;
    while (nn <= num) {
      for (int i = 0; i < width; i++) {
        mat[y][x] = nn;
        nn++;
        x++;
      }
      height--;y++;x--;
      for (int i = 0; i < height; i++) {
        mat[y][x] = nn;
        nn++;
        y++;
      }
      width--;x--;y--;
      for (int i = 0; i < width; i++) {
        mat[y][x] = nn;
        nn++;
        x--;
      }
      height--;y--;x++;
      for (int i = 0; i < height; i++) {
        mat[y][x] = nn;
        nn++;
        y--;
      }
      width--;x++;y++;
    }
    return mat;
  }
};
// @lc code=end
