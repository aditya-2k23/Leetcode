# Problem 94: Binary Tree Inorder Traversal

- **Difficulty**: Easy
- **Topics**: Stack, Tree, Depth-first Search, Binary Tree
- **LeetCode Link**: [Problem URL](https://leetcode.com/problems/binary-tree-inorder-traversal/)

## Problem Description

Given the `root` of a binary tree, return *the inorder traversal of its nodes' values.*

**Example 1:**

> Input: root = [1,null,2,3]  
> Output: [1,3,2]  
> Explanation: The inorder traversal is left-root-right, so we visit 1, then 3, then 2.  
> ![img1](https://assets.leetcode.com/uploads/2024/08/29/screenshot-2024-08-29-202743.png)

**Example 2:**

> Input: root = [1,2,3,4,5,null,8,null,null,6,7,9]  
> Output: [4,2,6,5,7,1,3,9,8]  
> Explanation: The inorder traversal is left-root-right, so we visit 4, then 2, then 6, then 5, then 7, then 1, then 3, then 9, then 8.  
> ![img2](https://assets.leetcode.com/uploads/2024/08/29/tree_2.png)

**Example 3:**

> Input: root = []  
> Output: []

**Example 4:**

> Input: root = [1]  
> Output: [1]

**Constraints:**

- The number of nodes in the tree is in the range `[0, 100]`.
- `-100 <= Node.val <= 100`

**Follow up:** Recursive solution is trivial, could you do it iteratively?

## Approach

Just perform a recursive inorder traversal of the binary tree and add the values of the root nodes to a vector.

### Steps

1. Create a vector to store the result in the class global scope.
2. Start the recursive function with the root->left.
3. Push back the value of the root node into the vector.
4. Continue with the root->right.
5. Return the vector after there are no nodes left.

## Solution

- **Language**: C++
- **File**: [solution.cpp](solution.cpp)

## Notes

- The recursive approach is straightforward and leverages the call stack to manage the traversal.

### Complexity Analysis

- **Time Complexity**: O(n)
- **Space Complexity**: O(n)

## Test Cases

- **Test Case 1**: `root = [1,null,2,3]`  
  Expected Output: `[1,3,2]`
- **Test Case 2**: `root = [1,2,3,4,5,null,8,null,null,6,7,9]`
  Expected Output: `[4,2,6,5,7,1,3,9,8]`
- **Test Case 3**: `root = []`
  Expected Output: `[]`
- **Test Case 4**: `root = [1]`
Expected Output: `[1]`

See the [tests](/tests/) directory for more test cases.

### Running Tests

- **C++ (Simple)**: `cd tests; g++ test.cpp ../solution.cpp -o test; ./test`
- **Python**: `cd tests; python test.py`
- **Java**: `javac .\solution.java tests/test.java; java -cp ".;tests" test`

---

> **Solved on**: 06/07/2025 |
> **Time taken**: 00:02:12 |
> **Attempts**: 1
