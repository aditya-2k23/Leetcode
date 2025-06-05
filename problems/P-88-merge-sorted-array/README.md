# Problem 88: Merge Sorted Array

- **Difficulty**: Easy
- **Topics**: Array, Two Pointers, Sorting
- **LeetCode Link**: [Problem URL](https://leetcode.com/problems/merge-sorted-array/)

## Problem Description

You are given two integer arrays `nums1` and `nums2`, sorted in **non-decreasing order**, and two integers `m` and `n`, representing the number of elements in `nums1` and `nums2` respectively.

Merge `nums1` and `nums2` into a single array sorted in **non-decreasing order**.

The final sorted array should not be returned by the function, but instead be stored inside the array `nums1`. To accommodate this, `nums1` has a length of `m + n`, where the first `m` elements denote the elements that should be merged, and the last `n` elements are set to `0` and should be ignored. `nums2` has a length of `n`.

**Example 1:**

> **Input:** `nums1` = `[1,2,3,0,0,0]`, `m` = `3`, `nums2` = `[2,5,6]`, `n` = `3`  
> **Output:** `[1,2,2,3,5,6]`  
> **Explanation:** The arrays we are merging are `[1,2,3]` and `[2,5,6]`.  
> The result of the merge is `[1,2,2,3,5,6]` with the underlined elements coming from `nums1`.

**Example 2:**

> **Input:** `nums1` = `[1]`, `m` = `1`, `nums2` = `[]`, `n` = `0`  
> **Output:** `[1]`  
> **Explanation:** The arrays we are merging are `[1]` and `[]`.  
> The result of the merge is `[1]`.

**Example 3:**

> **Input:** `nums1` = `[0]`, `m` = `0`, `nums2` = `[1]`, `n` = `1`  
> **Output:** `[1]`  
> **Explanation:** The arrays we are merging are `[]` and `[1]`.  
> The result of the merge is `[1]`.  
> Note that because `m` = `0`, there are no elements in `nums1`. The `0` is only there to ensure the merge result can fit in `nums1`.

**Constraints:**

- `nums1.length == m + n`
- `nums2.length == n`
- `0 <= m, n <= 200`
- `1 <= m + n <= 200`
- `-10⁹ <= nums1[i], nums2[j] <= 10⁹`

**Follow up:** Can you come up with an algorithm that runs in `O(m + n)` time?

## Approach

### Brute Force Approach

1. Push all the elements of `nums2` into `nums1`.
2. Remove all the zeroes from `nums1`.
3. Sort `nums1`.

#### Complexity Analysis

- **Time Complexity**: `O(N(M + N))` due to the sorting step.
- **Space Complexity**: `O(1)` if we ignore the space used by the sorting algorithm.

### Two Pointers Approach

1. Initialize two pointers, `i` for `nums1` and `j` for `nums2`, starting from the end of the valid elements in both arrays.
2. Start filling `nums1` from the end, comparing the elements pointed by `i` and `j`.
3. If `nums1[i]` is greater than `nums2[j]`, place `nums1[i]` at the end of `nums1` and decrement `i`.
4. Otherwise, place `nums2[j]` at the end of `nums1` and decrement `j`.
5. Continue this until all elements from `nums2` are merged into `nums1`.
6. If there are any remaining elements in `nums2`, copy them to the beginning of `nums1`.

#### Complexity Analysis

- **Time Complexity**: `O(m + n)`
- **Space Complexity**: `O(1)`

## Solution

- **Language**: _(e.g., Python, Java, C++)_
- **File**: [solution.cpp](solution.cpp)

## Notes

- The brute force approach is straightforward but inefficient for larger inputs due to the sorting step.
- The two pointers approach is optimal and does not require additional space, making it efficient for merging sorted arrays.

## Test Cases

See the [`./tests/`](./tests/) folder for example test cases.

### Running Tests

- **C++ (Simple)**: `cd tests; g++ test.cpp ../solution.cpp -o test; ./test`
- **Python**: `cd tests; python test.py`
- **Java**: `javac .\solution.java tests/test.java; java -cp ".;tests" test`

---

> **Solved on**: 06/06/2025 |
> **Time taken**: 00:12:27 |
> **Attempts**: 2
