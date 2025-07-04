# Problem 189: Rotate Array

- **Difficulty**: Medium
- **Topics**: Array, Math, Two Pointers
- **LeetCode Link**: [Problem URL](https://leetcode.com/problems/rotate-array/)

## Problem Description

Given an integer array `nums`, rotate the array to the right by `k` steps, where `k` is non-negative.

**Example 1:**

> Input: nums = [1,2,3,4,5,6,7], k = 3  
> Output: [5,6,7,1,2,3,4]  
> Explanation:  
> rotate 1 steps to the right: [7,1,2,3,4,5,6]  
> rotate 2 steps to the right: [6,7,1,2,3,4,5]  
> rotate 3 steps to the right: [5,6,7,1,2,3,4]

**Example 2:**

> Input: nums = [-1,-100,3,99], k = 2  
> Output: [3,99,-1,-100]  
> Explanation:  
> rotate 1 steps to the right: [99,-1,-100,3]  
> rotate 2 steps to the right: [3,99,-1,-100]

**Constraints:**

- 1 <= nums.length <= 105
- 2³¹ <= nums[i] <= 2³¹ - 1
- 0 <= k <= 105

**Follow up:**

- Try to come up with as many solutions as you can. There are at least **three** different ways to solve this problem.
- Could you do it in-place with `O(1)` extra space?

## Approach

To solve this problem, we can use the two-pointer technique and use another `temp` array to store the rotated values.

### Steps

1. Calculate the effective rotation steps `k` as `k % nums.size()`.
2. Create a temporary array of the size `k`.
3. Copy the last `k` elements from `nums` to the temporary array.
4. Shift the remaining elements in `nums` to the right by `k` positions.
5. Copy the elements from the temporary array back to the start of `nums`.
6. Return the modified `nums` array.

## Alternative Approach (Reversal)

An alternative approach to solve this problem is to use the reversal algorithm, which involves three main steps:

1. Reverse the entire array.
2. Reverse the first `k` elements.
3. Reverse the remaining `n-k` elements.

## Solution

- **Language**: C++ (Two Pointers)
- **File**: [solution.cpp](solution.cpp)

##

- **Language**: Java (Reversal Technique)
- **File**: [solution.java](solution.java)

## Notes

- Ensure to handle edge cases such as when `k` is greater than the length of the array.

### Complexity Analysis

#### Two Pointers Approach

- **Time Complexity**: O(n), where n is the length of the array.
- **Space Complexity**: O(n), due to the temporary array used for rotation.

#### Reversal Approach

- **Time Complexity**: O(n), where n is the length of the array.
- **Space Complexity**: O(1), as it performs the rotation in-place.

## Test Cases

- **Test Case 1**: `nums = [1,2,3,4,5,6,7], k = 3`  
  Expected Output: `[5,6,7,1,2,3,4]`
- **Test Case 2**: `nums = [-1,-100,3,99], k = 2`
  Expected Output: `[3,99,-1,-100]`
- **Test Case 3**: `nums = [1,2,3,4,5], k = 5`
  Expected Output: `[1,2,3,4,5]` (no change)
- **Test Case 4**: `nums = [1], k = 0`
  Expected Output: `[1]` (no change)

See the [`tests`](/tests/) directory for more test cases.

### Running Tests

- **C++ (Simple)**: `cd tests; g++ test.cpp ../solution.cpp -o test; ./test`
- **Python**: `cd tests; python test.py`
- **Java**: `javac .\solution.java tests/test.java; java -cp ".;tests" test`

---

> **Solved on**: 04/07/2025 |
> **Time taken**: 00:33:47 |
> **Attempts**: 2
