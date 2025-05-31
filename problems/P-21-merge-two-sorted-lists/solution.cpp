/*
 * LeetCode Problem: 21. Merge Two Sorted Lists
 * Difficulty: Easy
 * Topics: Linked List, Recursion
 * Date Solved: 31/05/2025
*/

#include <bits/stdc++.h>
using namespace std;

class ListNode {
public:
  int val;
  ListNode* next;
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode* next) : val(x), next(next) {}
};

class Solution {
public:
  // Iterative method using a dummy List
  ListNode* iterativeMerge(ListNode* list1, ListNode* list2) {
    if (!list1 && !list2) return nullptr;

    ListNode dummy(0);
    ListNode* tail = &dummy;

    while (list1 && list2) {
      if (list1->val < list2->val) {
        tail->next = list1;
        list1 = list1->next;
      }
      else {
        tail->next = list2;
        list2 = list2->next;
      }
      tail = tail->next;
    }

    tail->next = list1 ? list1 : list2;

    return dummy.next;
  }

  // Recursive method
  ListNode* recursiveMerge(ListNode* list1, ListNode* list2) {
    if (!list1) return list2;
    if (!list2) return list1;

    if (list1->val < list2->val) {
      list1->next = recursiveMerge(list1->next, list2);
      return list1;
    }
    else {
      list2->next = recursiveMerge(list1, list2->next);
      return list2;
    }
  }


  // Brute Force method using a vector/array
  ListNode* bruteForceMerge(ListNode* list1, ListNode* list2) {
    if (!list1 && !list2) return nullptr;

    vector<int> arr;
    while (list1) {
      arr.push_back(list1->val);
      list1 = list1->next;
    }

    while (list2) {
      arr.push_back(list2->val);
      list2 = list2->next;
    }

    sort(arr.begin(), arr.end());

    ListNode* head = new ListNode(0);
    ListNode* temp = head;

    for (int i : arr) {
      temp->next = new ListNode(i);
      temp = temp->next;
    }

    return head->next;
  }
};
