# Problem 704: Binary Search

- **Difficulty**: Easy
- **Topics**: Array, Binary Search
- **LeetCode Link**: [Problem URL](https://leetcode.com/problems/binary-search/)

## Problem Description

Given an array of integers `nums` which is sorted in ascending order, and an integer `target`, write a function to search target in `nums`. If `target` exists, then return its index. Otherwise, return `-1`.

You must write an algorithm with `O(log n)` runtime complexity.

**Example 1:**

> **Input:** nums = [-1,0,3,5,9,12], target = 9  
> **Output:** 4  
> **Explanation:** 9 exists in nums and its index is 4

**Example 2:**

> **Input:** nums = [-1,0,3,5,9,12], target = 2  
> **Output:** -1  
> **Explanation:** 2 does not exist in nums so return -1

**Constraints:**

- `1 <= nums.length <= 10⁴`
- `-10⁴ < nums[i], target < 10⁴`
- All the integers in `nums` are **unique**.
- `nums` is sorted in ascending order.

## Approach

To solve the problem of searching for a target value in a sorted array using binary search, we can follow these steps:

### Steps

1. Initialize two pointers, `left` and `right`, to the start and end of the array, respectively.
2. While `left` is less than or equal to `right`:
3. Calculate the middle index `mid` as the average of `left` and `right`.
4. Compare the value at `nums[mid]` with the `target`:
   - If `nums[mid]` is equal to `target`, return `mid`.
   - If `nums[mid]` is less than `target`, move the `left` pointer to `mid + 1`.
   - If `nums[mid]` is greater than `target`, move the `right` pointer to `mid - 1`.
5. If the loop ends without finding the target, return `-1`.

## Solution

- **Language**: C++
- **File**: [solution.cpp](solution.cpp)

## Notes

Ensure that the input array is sorted before applying binary search.

### Complexity Analysis

- **Time Complexity**: `O(log n)`  
  The algorithm divides the search space in half with each iteration, leading to logarithmic time complexity.
- **Space Complexity**: `O(1)`  
  The algorithm uses a constant amount of space for the pointers.

## Test Cases

See the [`./tests/`](./tests/) folder for example test cases.

### Running Tests

- **C++ (Simple)**: `cd tests; g++ test.cpp ../solution.cpp -o test; ./test`
- **Python**: `cd tests; python test.py`
- **Java**: `javac .\solution.java tests/test.java; java -cp ".;tests" test`

---

> **Solved on**: 06/06/2025 |
> **Time taken**: 00:03:27 |
> **Attempts**: 1
