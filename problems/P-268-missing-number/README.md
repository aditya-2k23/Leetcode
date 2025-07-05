# Problem 268: Missing Number

- **Difficulty**: Easy
- **Topics**: Array, Hash Table, Bit Manipulation, Math, Sorting, Binary Search
- **LeetCode Link**: [Problem URL](https://leetcode.com/problems/missing-number/)

## Problem Description

Given an array `nums` containing `n` distinct numbers in the range `[0, n]`, return _the only number in the range that is missing from the array._

**Example 1:**

> Input: nums = [3,0,1]  
> Output: 2  
> Explanation:
> `n = 3` since there are 3 numbers, so all numbers are in the range `[0,3]`. 2 is the missing number in the range since it does not appear in `nums`.

**Example 2:**

> Input: nums = [0,1]  
> Output: 2  
> Explanation:  
> `n = 2` since there are 2 numbers, so all numbers are in the range `[0,2]`. 2 is the missing number in the range since it does not appear in `nums`.

**Example 3:**

> Input: nums = [9,6,4,2,3,5,7,0,1]  
> Output: 8  
> Explanation:  
> `n = 9` since there are 9 numbers, so all numbers are in the range `[0,9]`. 8 is the missing number in the range since it does not appear in `nums`.

**Constraints:**

- `n == nums.length`
- `1 <= n <= 10⁴`
- `0 <= nums[i] <= n`
- All the numbers of `nums` are **unique**.

**Follow up:** Could you implement a solution using only `O(1)` extra space complexity and `O(n)` runtime complexity?

## Approach

There many approaches to solve this problem, including:

- Using a HashSet to track numbers
- Using the mathematical formula for the sum of the first `n` natural numbers
- Using XOR to find the missing number
- Using sorting and binary search
- Using an array containing n elements to track presence using a linear search
- Using flags and linear searching the array

## Solution

- **Language**: C++ (Simple Extra Space Linear Search Approach)
- **File**: [solution1.cpp](solution1.cpp)
- **Time Complexity**: O(n)
- **Space Complexity**: O(n)

##

- **Language**: C++ (Sorting Binary Search Approach)
- **File**: [solution2.cpp](solution2.cpp)
- **Time Complexity**: O(n log n)
- **Space Complexity**: O(1)

##

- **Language**: Python (Mathematical Approach)
- **File**: [solution.py](solution.py)
- **Time Complexity**: O(n)
- **Space Complexity**: O(1)

##

- **Language**: Java (XOR Approach)
- **File**: [solution1.java](solution1.java)
- **Time Complexity**: O(n)
- **Space Complexity**: O(1)

##

- **Language**: Java (HashSet Approach)
- **File**: [solution2.java](solution2.java)
- **Time Complexity**: O(n)
- **Space Complexity**: O(n)

## Notes

- The problem can be solved using various methods, each with different time and space complexities.
- The mathematical approach is often the most efficient in terms of both time and space.
- The XOR approach is also efficient and has the advantage of not requiring additional space.

## Test Cases

See the [`tests`](/tests) directory for various test cases and their expected outputs.

### Running Tests

- **C++ (Simple)**: `cd tests; g++ .\test.cpp ../solution1.cpp ..\solution2.cpp -o test; ./test`
- **Python**: `cd tests; python test.py`
- **Java**: `javac .\solution1.java ./solution2.java .\tests\test.java; java -cp ".;tests" test`

---

> **Solved on**: 05/07/2025 |
> **Time taken**: 00:05:23 |
> **Attempts**: 2
