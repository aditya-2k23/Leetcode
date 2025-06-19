/*
 * LeetCode Problem: 141. Linked List Cycle
 * Difficulty: Easy
 * Topics: Linked List, Two Pointers, Hash Table
 * Date Solved: 19/06/2025
*/

#include <bits/stdc++.h>
using namespace std;

struct ListNode {
  int val;
  ListNode* next;
  ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
  bool hasCycle(ListNode* head) {
    if (head == nullptr)
      return false;

    ListNode* slow = head;
    ListNode* fast = head;

    while (fast && fast->next) {
      slow = slow->next;
      fast = fast->next->next;

      if (slow == fast)
        return true;
    }

    return false;
  }
};
