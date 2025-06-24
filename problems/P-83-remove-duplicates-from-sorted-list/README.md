# Problem 83: Remove Duplicates from Sorted List

- **Difficulty**: _Easy_
- **Topics**: Linked List
- **LeetCode Link**: [Problem URL](https://leetcode.com/problems/remove-duplicates-from-sorted-list/)

## Problem Description

Given the `head` of a sorted linked list, _delete all duplicates such that each element appears only once. Return the linked list **sorted** as well_.

**Example 1:**

![Example 1](https://assets.leetcode.com/uploads/2021/01/04/list1.jpg)

> Input: head = [1,1,2]  
> Output: [1,2]

**Example 2:**

![Example 2](https://assets.leetcode.com/uploads/2021/01/04/list2.jpg)

> Input: head = [1,1,2,3,3]
> Output: [1,2,3]

**Constraints:**

- The number of nodes in the list is in the range `[0, 300]`.
- `-100 <= Node.val <= 100`
- The list is guaranteed to be **sorted** in ascending order.

## Approach

### Using a Simple Traversal Technique

To solve the problem of removing duplicates from a sorted linked list, we can utilize a simple traversal technique. Since the list is sorted, any duplicates will be adjacent to each other. We will iterate through the linked list and compare each node's value with the next node's value. If they are the same, we will skip the next node by adjusting the pointers.

#### Steps

1. Initialize a pointer `current` to the head of the linked list.
2. While `current` and `current.next` are not null:
3. If `current.val` is equal to `current.next.val`, it means we have found a duplicate.
4. Set `current.next` to `current.next.next` to skip the duplicate node.
5. If they are not equal, move the `current` pointer to the next node.
6. Continue this process until we reach the end of the list.
7. Return the modified `head` of the linked list.

### Using an Unordered Set

Alternatively, we can use an unordered set to keep track of the values we have seen so far. This approach is useful if we want to remove duplicates from an unsorted linked list as well.
We will traverse the linked list, and for each node, we will check if its value is already in the set. If it is, we will remove the node by adjusting the pointers. If it is not, we will add the value to the set and continue traversing.

#### Steps

1. Initialize an unordered set to keep track of seen values.
2. Traverse the linked list starting from the head.
3. For each node, check if its value is already in the set.
4. If it is, remove the node by adjusting the pointers.
5. If it is not, add the value to the set and move to the next node.
6. Continue until the end of the list is reached.
7. Return the `head` of the modified linked list.

## Solution

- **Language**: C++
- **File**: [solution.cpp](solution.cpp)

## Notes

- The solution uses a simple traversal technique to efficiently remove duplicates from a sorted linked list.

### Complexity Analysis

#### Iterative Approach

- **Time Complexity**: `O(n)`, where `n` is the number of nodes in the linked list. We traverse the list once.
- **Space Complexity**: `O(1)`, as we are not using any additional data structures that grow with the input size. The space used is constant, regardless of the input size.

#### Unordered Set Approach

- **Time Complexity**: `O(n)`, where `n` is the number of nodes in the linked list. We traverse the list once.
- **Space Complexity**: `O(n)`, as we use an unordered set to store the values of the nodes, which can grow with the input size.

## Test Cases

- **Test Case 1**: Input: `[1,1,2]`  
  Output: `[1,2]`

- **Test Case 2**: Input: `[1,1,2,3,3]`
  Output: `[1,2,3]`

- **Test Case 3**: Input: `[]`
  Output: `[]` (Empty list)

For more test cases, refer to the [`tests`](/tests/) directory.

### Running Tests

- **C++ (Simple)**: `cd tests; g++ test.cpp ../solution.cpp -o test; ./test`
- **Python**: `cd tests; python test.py`
- **Java**: `javac .\solution.java tests/test.java; java -cp ".;tests" test`

---

> **Solved on**: 24/06/2025 |
> **Time taken**: 00:07:43 |
> **Attempts**: 1
