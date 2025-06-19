# Problem 141: Linked List Cycle

- **Difficulty**: Easy
- **Topics**: Linked List, Two Pointers, Hash Table
- **LeetCode Link**: [Problem URL](https://leetcode.com/problems/linked-list-cycle/)

## Problem Description

Given `head`, the head of a linked list, determine if the linked list has a cycle in it.

There is a cycle in a linked list if there is some node in the list that can be reached again by continuously following the `next` pointer. Internally, `pos` is used to denote the index of the node that tail's `next` pointer is connected to. **Note that `pos` is not passed as a parameter.**

Return `true` _if there is a cycle in the linked list_. Otherwise, return `false`.

**Example 1:**

![img1](https://assets.leetcode.com/uploads/2018/12/07/circularlinkedlist.png)

> Input: head = [3,2,0,-4], pos = 1  
> Output: true  
> Explanation: There is a cycle in the linked list, where the tail connects to the 1st node (0-indexed).

**Example 2:**

![img2](https://assets.leetcode.com/uploads/2018/12/07/circularlinkedlist_test2.png)

> Input: head = [1,2], pos = 0
> Output: true
> Explanation: There is a cycle in the linked list, where the tail connects to the 0th node.

**Example 3:**

![img3](https://assets.leetcode.com/uploads/2018/12/07/circularlinkedlist_test3.png)

> Input: head = [1], pos = -1
> Output: false
> Explanation: There is no cycle in the linked list.

**Constraints:**

- The number of the nodes in the list is in the range `[0, 10⁴]`.
- `-10⁵ <= Node.val <= 10⁵`
- `pos` is `-1` or a valid index in the linked-list.

## Approach

### Two Pointers (Floyd's Cycle Detection)

Use two pointers, `slow` and `fast`. Move `slow` by one step and `fast` by two steps. If they meet at some point, there is a cycle; otherwise, if `fast` reaches the end of the list, there is no cycle.

#### Steps (2 Pointers Approach)

1. Initialize two pointers, `slow` and `fast`, both pointing to the head of the linked list.
2. Move `slow` one step and `fast` two steps in each iteration.
3. If `slow` and `fast` meet at any point, return `true` (indicating a cycle).
4. If `fast` reaches the end of the list (`null`), return `false` (indicating no cycle).
5. Continue until either a cycle is detected or the end of the list is reached.

### Hash Set

Alternatively, you can use a hash set to keep track of visited nodes. If you encounter a node that has already been seen, it indicates a cycle.

### Steps (Hash Set Approach)

1. Initialize an empty hash set to keep track of visited nodes.
2. Traverse the linked list, adding each node to the hash set.
3. If you encounter a node that is already in the hash set, return `true` (indicating a cycle).
4. If you reach the end of the list (`null`), return `false` (indicating no cycle).

## Solution

- **Language**: C++ (Floyd's Cycle Detection)
- **File**: [solution.cpp](solution.cpp)

##

- **Language**: Java (Hash Set Approach)
- **File**: [solution.java](solution.java)

## Notes

- The two-pointer approach is more space-efficient than the hash set approach, as it uses O(1) space compared to O(n) for the hash set.
- The two-pointer approach is also known as Floyd's Cycle Detection algorithm, which is a classic algorithm for cycle detection in linked lists.

### Complexity Analysis

- **Time Complexity**: `O(n)` where `n` is the number of nodes in the linked list.
  - In the worst case, both pointers traverse the entire list.
- **Space Complexity**:
  - **Two Pointers**: `O(1)` (constant space).
  - **Hash Set**: `O(n)` (space for storing visited nodes).

## Test Cases

See the [`tests`](/tests/) directory for various test cases.

### Running Tests

- **C++ (Simple)**: `cd tests; g++ test.cpp ../solution.cpp -o test; ./test`
- **Python**: `cd tests; python test.py`
- **Java**: `javac .\solution.java tests/test.java; java -cp ".;tests" test`

---

> **Solved on**: 19/06/2025 |
> **Time taken**: 00:41:35 |
> **Attempts**: 4
