# Problem 136: Single Number

- **Difficulty**: Easy
- **Topics**: Array, Bit Manipulation
- **LeetCode Link**: [Problem URL](https://leetcode.com/problems/single-number/)

## Problem Description

Given a **non-empty** array of integers `nums`, every element appears twice except for one. Find that single one.

You must implement a solution with a linear runtime complexity and use only constant extra space.

**Example 1:**

> Input: nums = [2,2,1]  
> Output: 1

**Example 2:**

> Input: nums = [4,1,2,1,2]  
> Output: 4

**Example 3:**

> Input: nums = [1]  
> Output: 1

**Constraints:**

- `1 <= nums.length <= 3 * 10⁴`
- `-3 * 10⁴ <= nums[i] <= 3 * 10⁴`
- Each element in the array appears twice except for one element which appears only once.

## Approach

I will be using two approaches to solve this problem:

### **Unordered Map**

#### Steps

1. Create an unordered map to store the frequency of each element.
2. Iterate through the array and update the frequency count in the map.
3. Find the element with a frequency of 1 and return it.

### **Bit Manipulation (XOR)**

#### Steps

1. Initialize a variable `xor` to 0.
2. Iterate through each number in the array and perform an XOR operation with `xor`.
3. The final value of `xor` will be the single number since XORing a number with itself results in 0, and XORing with 0 results in the number itself.
4. Return the `xor`.

## Solution

- **Language**: C++ (unordered map)
- **File**: [solution.cpp](solution.cpp)

##

- **Language**: Java (bit manipulation)
- **File**: [solution.java](solution.java)

## Notes

### Complexity Analysis

- The unordered map approach has a time complexity of O(n) and space complexity of `O(n)`.
- The bit manipulation approach has a time complexity of O(n) and space complexity of `O(1)`.

## Test Cases

See the [`tests`](/tests/) directory for test cases.

### Running Tests

- **C++ (Simple)**: `cd tests; g++ test.cpp ../solution.cpp -o test; ./test`
- **Python**: `cd tests; python test.py`
- **Java**: `javac .\solution.java tests/test.java; java -cp ".;tests" test`

---

> **Solved on**: 09/07/2025 |
> **Time taken**: 00:05:22 |
> **Attempts**: 1
