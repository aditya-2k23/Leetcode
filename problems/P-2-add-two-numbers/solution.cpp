/*
 * LeetCode Problem: 2. Add Two Numbers
 * Difficulty: Medium
 * Topics: Linked List, Math, Recursion
 * Date Solved: 21/06/2025
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
  ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    ListNode* head = new ListNode(0);
    ListNode* temp = head;

    int carry = 0;
    while (l1 || l2 || carry) {
      int sum = carry;

      if (l1) {
        sum += l1->val;
        l1 = l1->next;
      }
      if (l2) {
        sum += l2->val;
        l2 = l2->next;
      }

      carry = sum / 10;
      temp->next = new ListNode(sum % 10);
      temp = temp->next;
    }

    return head->next;
  }
};
