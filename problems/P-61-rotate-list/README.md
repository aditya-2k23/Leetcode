# Problem 61: Rotate List

- **Difficulty**: Medium
- **Topics**: Linked List, Two Pointers
- **LeetCode Link**: [Problem URL](https://leetcode.com/problems/rotate-list/)

## Problem Description

Given the `head` of a linked list, rotate the list to the right by `k` places.

**Example 1:**

![img1](https://assets.leetcode.com/uploads/2020/11/13/rotate1.jpg)

> **Input:** head = [1,2,3,4,5], k = 2  
> **Output:** [4,5,1,2,3]

**Example 2:**

![img2](https://assets.leetcode.com/uploads/2020/11/13/roate2.jpg)

> **Input:** head = [0,1,2], k = 4  
> **Output:** [2,0,1]

**Constraints:**

- The number of nodes in the list is in the range `[0, 500]`.
- `-100 <= Node.val <= 100`
- `0 <= k <= 2 * 10^9`

## Approach

Find the length of the linked list, then normalize `k` to be within the bounds of the list length. Then, find the new tail of the list, which is at the position `length - k`. Then go that position and make the necessary adjustments to the pointers.

### Steps

1. Find the length of the linked list.
2. Normalize `k` to be within the bounds of the list length.
3. Find the new tail of the list at position `length - k`.
4. Adjust the pointers to rotate the list.
5. Return the new head of the rotated list.

## Solution

- **Language**: C++
- **File**: [solution.cpp](solution.cpp)

## Notes

- Ensure to handle edge cases such as an empty list or when `k` is larger than the length of the list.

### Complexity Analysis

- **Time Complexity**: `O(n)`, where `n` is the number of nodes in the linked list. We traverse the list to find its length and then again to adjust the pointers.
- **Space Complexity**: `O(1)`, as we are not using any extra space that grows with the input size.

## Test Cases

- **Test Case 1**: `head = [1,2,3,4,5], k = 2`  
  **Expected Output**: `[4,5,1,2,3]`
- **Test Case 2**: `head = [0,1,2], k = 4`
  **Expected Output**: `[2,0,1]`

See the [`tests`](/tests/) directory for more test cases.

### Running Tests

- **C++ (Simple)**: `cd tests; g++ test.cpp ../solution.cpp -o test; ./test`
- **Python**: `cd tests; python test.py`
- **Java**: `javac .\solution.java tests/test.java; java -cp ".;tests" test`

---

> **Solved on**: 02/07/2025 |
> **Time taken**: 00:33:47 |
> **Attempts**: 5
