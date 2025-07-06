# Problem 75: Sort Colors

- **Difficulty**: Medium
- **Topics**: Array, Two Pointers, Sorting
- **LeetCode Link**: [Problem URL](https://leetcode.com/problems/sort-colors/)

## Problem Description

Given an array `nums` with `n` objects colored red, white, or blue, sort them [in-place](https://en.wikipedia.org/wiki/In-place_algorithm) so that objects of the same color are adjacent, with the colors in the order red, white, and blue.

We will use the integers `0`, `1`, and `2` to represent the color red, white, and blue, respectively.

You must solve this problem without using the library's sort function.

**Example 1:**

> Input: nums = [2,0,2,1,1,0]  
> Output: [0,0,1,1,2,2]

**Example 2:**

> Input: nums = [2,0,1]  
> Output: [0,1,2]

**Constraints:**

- `n == nums.length`
- `1 <= n <= 300`
- `nums[i]` is either `0`, `1`, or `2`.

**Follow up:** Could you come up with a one-pass algorithm using only constant extra space?

## Approach

To solve the problem of sorting colors represented by integers `0`, `1`, and `2`, we can use the Dutch National Flag problem approach. This involves using three pointers to partition the array into three sections: one for each color.
The pointers will help us maintain the order of colors while ensuring that we only traverse the array once.

### Steps

1. Initialize three pointers: `low`, `mid`, and `high`.
   - `low` will track the position for the next `0`.
   - `mid` will traverse the array.
   - `high` will track the position for the next `2`.
2. Iterate through the array with the `mid` pointer:
   - If `nums[mid]` is `0`, swap it with `nums[low]`, increment both `low` and `mid`.
   - If `nums[mid]` is `1`, just increment `mid`.
   - If `nums[mid]` is `2`, swap it with `nums[high]` and decrement `high` (do not increment `mid` in this case).
3. Continue this process until `mid` exceeds `high`.
4. The array will be sorted in-place with all `0`s at the beginning, followed by `1`s, and `2`s at the end.

## Solution

- **Language**: C++
- **File**: [solution.cpp](solution.cpp)

## Notes

### Complexity Analysis

- **Time Complexity**: `O(n)`
- **Space Complexity**: `O(1)`

## Test Cases

See the [`tests`](/tests/) directory for various test cases.

### Running Tests

- **C++ (Simple)**: `cd tests; g++ test.cpp ../solution.cpp -o test; ./test`
- **Python**: `cd tests; python test.py`
- **Java**: `javac .\solution.java tests/test.java; java -cp ".;tests" test`

---

> **Solved on**: 06/07/2025 |
> **Time taken**: 00:05:06 |
> **Attempts**: 2
