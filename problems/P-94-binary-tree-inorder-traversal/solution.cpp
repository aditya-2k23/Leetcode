/*
 * LeetCode Problem: 94 - Binary Tree Inorder Traversal
 * Difficulty: Easy
 * Topics: Stack, Tree, Depth-first Search, Binary Tree
 * Date Solved: 06/07/2025
*/

#include <bits/stdc++.h>
using namespace std;

class TreeNode {
public:
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    vector<int> result;
    vector<int> inorderTraversal(TreeNode* root) {
        if (root) {
            inorderTraversal(root->left);
            result.push_back(root->val);
            inorderTraversal(root->right);
        }

        return result;
    }
};
