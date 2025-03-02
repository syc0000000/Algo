/*
 * @lc app=leetcode.cn id=160 lang=cpp
 *
 * [160] 相交链表
 */

struct ListNode {
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(nullptr) {}
};
// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
// #include <bits/stdc++.h>
#include <cstdlib>
class Solution {
public:
  ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
    int lenA = 0, lenB = 0;
    ListNode *nowA = headA;
    ListNode *nowB = headB;
    while (nowA) {
      lenA++;
      nowA = nowA->next;
    }
    while (nowB) {
      lenB++;
      nowB = nowB->next;
    }
    nowA = headA;
    nowB = headB;
    int jd = abs(lenA - lenB);
    if (lenA > lenB) {
      for (int i = 0; i < jd; i++) {
        nowA = nowA->next;
      }
    } else {
      for (int i = 0; i < jd; i++) {
        nowB = nowB->next;
      }
    }
    while (nowA!=nullptr) {
        if (nowA == nowB) {
            return nowA;
        }
        nowA = nowA->next;
        nowB = nowB->next;
    }
    return nullptr;
  }
};
// @lc code=end
