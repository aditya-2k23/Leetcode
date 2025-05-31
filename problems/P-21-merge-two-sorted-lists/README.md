# Problem 21: Merge Two Sorted Lists

- **Difficulty**: Easy
- **Topics**: Linked List, Recursion
- **LeetCode Link**: [Problem URL](https://leetcode.com/problems/merge-two-sorted-lists/)

## Problem Description

You are given the heads of two sorted linked lists list1 and list2.

Merge the two lists into one sorted list. The list should be made by splicing together the nodes of the first two lists.

Return the head of the merged linked list.

**Example 1:**
![ex:1 image](https://assets.leetcode.com/uploads/2020/10/03/merge_ex1.jpg)

**Input:** `list1 = [1,2,4], list2 = [1,3,4]`  
**Output:** `[1,1,2,3,4,4]`

**Example 2:**  
**Input:** `list1 = [], list2 = []`  
**Output:** `[]`

**Example 3:**  
**Input:** `list1 = [], list2 = [0]`  
**Output:** `[0]`

**Constraints:**

- The number of nodes in both lists is in the range `[0, 50]`.
- `-100 <= Node.val <= 100`
- Both `list1` and `list2` are sorted in **non-decreasing** order.

## Approach

So, there are 3 approaches to solve this problem:

1. **Iterative Approach**: Use a dummy node to simplify the merging process and iterate through both lists.
2. **Recursive Approach**: Recursively merge the two lists by comparing their head nodes.
3. **Using a vector/array**: Convert both linked lists to arrays, merge the arrays, and convert back to a linked list.

### Steps (Iterative Approach)

1. Create a dummy node to simplify the merging process.
2. Use a pointer to track the current position in the merged list.
3. Compare the values of the nodes in both lists and append the smaller one to the merged list.
4. Move the pointer in the list from which the node was taken.
5. Continue until one of the lists is exhausted.
6. Append the remaining nodes of the other list to the merged list.
7. Return the next node of the dummy node as the head of the merged list.

#### Complexity Analysis (Iterative Approach)

- **Time Complexity**: `O(n + m)`, where `n` and `m` are the lengths of the two lists.
- **Space Complexity**: `O(1)` for the iterative approach (excluding the space used by the input lists).

### Steps (Recursive Approach)

1. If one of the lists is empty, return the other list.
2. Compare the head nodes of both lists.
3. Recursively merge the lists by choosing the smaller head node.
4. Set the next pointer of the chosen node to the result of merging the remaining nodes.

#### Complexity Analysis (Recursive Approach)

- **Time Complexity**: `O(n + m)`, where `n` and `m` are the lengths of the two lists.
- **Space Complexity**: `O(n + m)` due to the recursion stack.

### Steps (Using a vector/array)

1. Convert both linked lists to arrays.
2. Merge the two arrays.
3. Convert the merged array back to a linked list.

#### Complexity Analysis (Using a vector/array)

- **Time Complexity**: `O(n + m)`, where `n` and `m` are the lengths of the two lists.
- **Space Complexity**: `O(n + m)` for storing the merged array.

## Solution

- **Language**: C++
- **File**: [solution.cpp](solution.cpp)

## Test Cases

See the [`tests`](./tests/) folder for various test cases.

### Running Tests

- **C++ (Simple)**: `cd tests; g++ test.cpp ../solution.cpp -o test; ./test`
- **Python**: `cd tests; python test.py`
- **Java**: `javac .\solution.java tests/test.java; java -cp ".;tests" test`

---

> **Solved on**: 31/05/2025 |
> **Time taken**: 00:35:34 |
> **Attempts**: 6
