/*
 * LeetCode Problem: 61. Rotate List
 * Difficulty: Medium
 * Topics: Linked List, Two Pointers
 * Date Solved: 02/07/2025
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
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head || !head->next || k == 0)
            return head;

        ListNode* temp = head;
        int length = 1;
        while (temp->next) {
            temp = temp->next;
            length++;
        }

        temp->next = head;

        k = k % length;
        int pos = length - k;

        while (pos--)
            temp = temp->next;
        head = temp->next;
        temp->next = nullptr;

        return head;
    }
};
