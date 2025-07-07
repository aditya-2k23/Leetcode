/*
 * LeetCode Problem: 237. Delete Node in a Linked List
 * Difficulty: Medium
 * Topics: Linked List
 * Date Solved: 07/07/2025
*/

#include <bits/stdc++.h>
using namespace std;

class ListNode {
public:
    int val;
    ListNode* next;

    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    void deleteNode(ListNode* node) {
        node->val = node->next->val;
        node->next = node->next->next;
    }
};
