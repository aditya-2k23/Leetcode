# Problem 206: Reverse Linked List

- **Difficulty**: Easy
- **Topics**: Linked List, Recursion
- **LeetCode Link**: [Problem URL](https://leetcode.com/problems/reverse-linked-list/)

## Problem Description

Given the `head` of a singly linked list, reverse the list, and return _the reversed list_.

**Example 1:**

![Reverse Linked List Example 1](https://assets.leetcode.com/uploads/2021/02/19/rev1ex1.jpg)

> **Input:** head = [1,2,3,4,5]  
> **Output:** [5,4,3,2,1]

**Example 2:**

![Reverse Linked List Example 2](https://assets.leetcode.com/uploads/2021/02/19/rev1ex2.jpg)

> **Input:** head = [1,2]  
> **Output:** [2,1]

**Example 3:**

> **Input:** head = []  
> **Output:** []

**Constraints:**

- The number of nodes in the list is in the range `[0, 5000]`.
- `-5000 <= Node.val <= 5000`

**Follow-up:** A linked list can be reversed either iteratively or recursively. Could you implement both?

## Approach

### Iterative Approach (3 Pointers)

To reverse a linked list iteratively, we can use three pointers: `prev`, `current`, and `next`. The idea is to traverse the list and reverse the direction of the `next` pointer for each node.

### Steps

1. Initialize `prev` to `null`, `current` to `head`, and `next` to `null`.
2. Iterate through the list:
   - Store the `next` node (`current.next`).
   - Reverse the `current.next` pointer to point to `prev`.
   - Move `prev` to `current`.
   - Move `current` to `next`.
3. Continue until `current` becomes `null`.
4. Finally, return `prev` as the new head of the reversed list.

### Recursive Approach

To reverse a linked list recursively, we can use the call stack to reverse the pointers. The base case is when we reach the end of the list (i.e., when `head` is `null`). We then reverse the pointers as we return from the recursive calls.

### Steps (Use 1 pointer front)

1. If `head` is `null` or `head.next` is `null`, return `head`.
2. Recursively call the function with `head.next`.
3. Set `front` to `head.next`.
4. Set `front.next` to `head`.
5. Set `head.next` to `null`.
6. Return the new head of the reversed list.

## Solution

- **Language**: C++ (Iterative)
- **File**: [solution.cpp](solution.cpp)

##

- **Language**: Python (Recursive)
- **File**: [solution.py](solution.py)

## Notes

Reversing a linked list is a common problem that can be solved using both iterative and recursive methods. The iterative method is generally more space-efficient, while the recursive method is often more elegant and easier to understand.

### Complexity Analysis (Iterative)

- **Time Complexity**: `O(n)` where `n` is the number of nodes in the linked list.
- **Space Complexity**: `O(1)` for the iterative approach (in-place reversal).

### Complexity Analysis (Recursive)

- **Time Complexity**: `O(n)` where `n` is the number of nodes in the linked list.
- **Space Complexity**: `O(n)` for the recursive approach due to the call stack.

## Test Cases

See the [`tests` directory](./tests/) for various test cases implemented in C++ and Python.

### Running Tests

- **C++ (Simple)**: `cd tests; g++ test.cpp ../solution.cpp -o test; ./test`
- **Python**: `cd tests; python test.py`
- **Java**: `javac .\solution.java tests/test.java; java -cp ".;tests" test`

---

## Visualize the Iterative Approach

![Visualize](https://static.takeuforward.org/wp/uploads/2023/12/ll-reverse-a2-s2-897x1024.jpg)

## Visualize the Recursive Approach

![Visualize](https://static.takeuforward.org/wp/uploads/2023/12/Screenshot-2023-12-01-at-10.18.26-PM-1024x421.png)

---

> **Solved on**: 07/06/2025 |
> **Time taken**: 00:11:17 |
> **Attempts**: 3
