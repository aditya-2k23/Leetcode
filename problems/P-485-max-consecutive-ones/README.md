# Problem 485: Max Consecutive Ones

- **Difficulty**: Easy
- **Topics**: Array
- **LeetCode Link**: [Problem URL](https://leetcode.com/problems/max-consecutive-ones/)

## Problem Description

Given a binary array `nums`, return the maximum number of consecutive `1`'s in the array.

**Example 1:**

> Input: nums = [1,1,0,1,1,1]  
> Output: 3  
> Explanation: The first two digits or the last three digits are consecutive 1s. The maximum number of consecutive 1s is 3.

**Example 2:**

> Input: nums = [1,0,1,1,0,1]  
> Output: 2  
> Explanation: The maximum number of consecutive 1s is 2.

**Constraints:**

- `1 <= nums.length <= 10⁵`
- `nums[i]` is either `0` or `1`.

## Approach

Simple approach to solve the problem involves iterating through the array and counting the maximum number of consecutive `1`s. We can maintain a counter for the current streak of `1`s and update the maximum whenever we encounter a `0` or reach the end of the array.

### Steps

1. Initialize two variables: `max_count` to keep track of the maximum consecutive `1`s and `current_count` to count the current streak of `1`s.
2. Iterate through each element in the array:
    - If the element is `1`, increment `current_count`.
    - If the element is `0`, compare `current_count` with `max_count` and update `max_count` if necessary, then reset `current_count` to `0`.
3. After the loop, perform a final check to update `max_count` in case the array ends with a streak of `1`s.
4. Return `max_count` as the result.

## Solution

- **Language**: C++
- **File**: [solution.cpp](solution.cpp)

## Notes

- This problem can be solved in a single pass through the array, making it efficient.

### Complexity Analysis

- **Time Complexity**: `O(n)`
- **Space Complexity**: `O(1)`

## Test Cases

See the [`tests`](/tests) directory for various test cases.

### Running Tests

- **C++ (Simple)**: `cd tests; g++ test.cpp ../solution.cpp -o test; ./test`
- **Python**: `cd tests; python test.py`
- **Java**: `javac .\solution.java tests/test.java; java -cp ".;tests" test`

---

> **Solved on**: 06/07/2025 |
> **Time taken**: 00:02:04 |
> **Attempts**: 1
