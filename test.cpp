#include <cstdio>
int solution2(int n, int m) {
  int res[n][m];
  int nowDirection = 0; // 0-右上到左下 1-左下右上
  int x = 0, y = 0;
  int nowNum = 1;
  int min;
  if (n < m) {
    min = n;
  } else {
    min = m;
  }
  while (nowNum <= m * n) {
    if (x < 0) { // 说明到上方
      nowDirection = 0;
      if (y - 1 >= min) {
        //说明处于后半段
        y-=1;
        x+=2;
      }else if(y-1<min){
        x = 0;
      }
    } else if (y < 0) {
      nowDirection = 1;
      if (x - 1 >= min) {
        
      }
      y = 0;
    }
    res[x][y] = nowNum;
    nowNum++;
    if (nowDirection == 0) {
      x++;
      y--;
    } else {
      x--;
      y++;
    }
  }
  // 输出矩阵
  for (int i; i < n; i++) {
    for (int ii; ii < m; ii++) {
      printf("%d ", res[i][ii]);
    }
    printf("\n");
  }
  return 0;
}

int main() { solution2(3, 4); }