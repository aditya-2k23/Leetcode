/*
 * LeetCode Problem: 206. Reverse Linked List
 * Difficulty: Easy
 * Topics: Linked List, Recursion
 * Date Solved: 07/06/2025
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
  ListNode* reverseList(ListNode* head) {
    if (!head || !head->next) return head;

    ListNode* prev = nullptr;
    ListNode* temp = head;

    while (temp) {
      ListNode* front = temp->next;
      temp->next = prev;
      prev = temp;
      temp = front;
    }

    return prev;
  }
};
