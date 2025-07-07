# Problem 237: Delete Node in a Linked List

- **Difficulty**: Medium
- **Topics**: Linked List
- **LeetCode Link**: [Problem URL](https://leetcode.com/problems/delete-node-in-a-linked-list/)

## Problem Description

There is a singly-linked list `head` and we want to delete a node `node` in it.

You are given the node to be deleted `node`. You will **not be given access** to the first node of `head`.

All the values of the linked list are **unique**, and it is guaranteed that the given node `node` is not the last node in the linked list.

Delete the given node. Note that by deleting the node, we do not mean removing it from memory. We mean:

- The value of the given node should not exist in the linked list.
- The number of nodes in the linked list should decrease by one.
- All the values before node should be in the same order.
- All the values after node should be in the same order.

**Example 1:**

![img1](https://assets.leetcode.com/uploads/2020/09/01/node1.jpg)

> Input: head = [4,5,1,9], node = 5  
> Output: [4,1,9]  
> Explanation: You are given the second node with value 5, the linked list should become 4 -> 1 -> 9 after calling your function.

**Example 2:**

![img2](https://assets.leetcode.com/uploads/2020/09/01/node2.jpg)

> Input: head = [4,5,1,9], node = 1  
> Output: [4,5,9]  
> Explanation: You are given the third node with value 1, the linked list should become 4 -> 5 -> 9 after calling your function.

**Constraints:**

- The number of the nodes in the given list is in the range `[2, 1000]`.
- `-1000 <= Node.val <= 1000`
- The value of each node in the list is **unique**.
- The `node` to be deleted is **in the list** and is **not a tail** node.

## Approach

To delete the given `node`, we copy the value of the next node to the current node and adjust the next pointer to skip the next node.

### Steps

1. Copy the value of the next node to the current node.
2. Adjust the next pointer to skip the next node.

## Solution

- **Language**: C++
- **File**: [solution.cpp](solution.cpp)

## Notes

We are not actually deleting the given node, as question might imply. To actually delete the `node`, we need to change the reference of the previous node's next pointer to skip over the given node. However, we do not have access to the previous node.

![visual representation](https://assets.leetcode.com/users/images/1d9363ee-924a-48c9-a894-cbf5bec1e985_1714872196.8337712.png)

### Complexity Analysis

- **Time Complexity**: `O(1)`, as we're only modifying the current node.
- **Space Complexity**: `O(1)`, no extra space is used.

## Test Cases

See the [`tests`](/tests) directory for test cases.

### Running Tests

- **C++ (Simple)**: `cd tests; g++ test.cpp ../solution.cpp -o test; ./test`
- **Python**: `cd tests; python test.py`
- **Java**: `javac .\solution.java tests/test.java; java -cp ".;tests" test`

---

> **Solved on**: 07/07/2025 |
> **Time taken**: 00:04:37 |
> **Attempts**: 1
