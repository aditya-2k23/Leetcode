/*
 * LeetCode Problem: 83. Remove Duplicates from Sorted List
 * Difficulty: Easy
 * Topics: Linked List
 * Date Solved: 24/06/2025
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
    ListNode* deleteDuplicates(ListNode* head) {
        if (!head) return nullptr;

        ListNode* temp = head;

        while (temp && temp->next) {
            if (temp->val == temp->next->val) {
                ListNode* delNode = temp->next;
                temp->next = temp->next->next;
                delete delNode;
            }
            else
                temp = temp->next;
        }

        return head;
    }

    // unordered_set version uses O(n) space complexity
    ListNode* setDeleteDuplicates(ListNode* head) {
        if (!head) return nullptr;

        unordered_set<int> set;

        ListNode* prev = nullptr;
        ListNode* temp = head;

        while (temp) {
            if (set.count(temp->val)) {
                ListNode* delNode = temp;
                prev->next = temp->next;
                temp = temp->next;
                delete delNode;
            }
            else {
                set.insert(temp->val);
                prev = temp;
                temp = temp->next;
            }
        }

        return head;
    }
};
