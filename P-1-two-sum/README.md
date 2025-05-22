# Problem 1: Two Sum

- **Difficulty**: Easy
- **Topics**: Array, Hash Table
- **LeetCode Link**: [Problem URL](https://leetcode.com/problems/two-sum/)

## Problem Description

Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

**Example 1:**

```plaintext
Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
```

**Example 2:**

```plaintext
Input: nums = [3,2,4], target = 6
Output: [1,2]
```

**Example 3:**

```plaintext
Input: nums = [3,3], target = 6
Output: [0,1]
```

**Constraints:**

```plaintext
2 <= nums.length <= 104
-109 <= nums[i] <= 109
-109 <= target <= 109
Only one valid answer exists.
```

**Follow-up**: Can you come up with an algorithm that is less than O(n²) time complexity?

## Approach

The most efficient way to solve this problem is to use a hash map to store numbers and their indices. We iterate through the array, and for each number, we check if its complement `(target - num)` exists in the hash map. If it does, we return the indices. If not, we add the current number and its index to the hash map.

### Steps:

1. Initialize an empty hash map to store number-to-index mappings.
2. Iterate through the array `nums`.
3. For each number `num` at index `i`:
   - Calculate the complement: `complement = target - num`
   - If `complement` exists in the hash map, `return [hash_map[complement], i]`
   - Otherwise, add `num: i` to the hash map.
4. If no solution is found, return an empty list _(though the problem guarantees a solution)_.

## Solution

- **Language**: C++
- **File**: [solution.cpp](solution.cpp)

---

- **Language**: Python
- **File**: [solution.py](solution.py)

---

- **Language**: Java
- **File**: [solution.java](solution.java)

## Notes

- A brute-force approach (checking all pairs) would take O(n²) time, which is less efficient.
- The hash map approach trades space for time, achieving linear complexity.
- Edge cases to consider: empty array (not applicable due to problem constraints), negative numbers, or duplicate numbers.

### Complexity Analysis

- **Time Complexity**: `O(n)`, where n is the number of elements in the array. We traverse the array once.
- **Space Complexity**: `O(n)`, where n is the number of elements in the array. In the worst case, we store all elements in the hash map.

## Test Cases

- **Input**: `nums = [2,7,11,15], target = 9`

  - **Output**: `[0,1]`

- **Input**: `nums = [3,2,4], target = 6`
  - **Output**: `[1,2]`

_(See `tests/` folder for automated test cases)_

### Running Tests

- **C++ (Simple)**: `cd tests; g++ test.cpp ../solution.cpp -o test; ./test`
- **Python**: `cd tests; python test.py`
- **Java**: `javac .\solution.java tests/test.java; java -cp ".;tests" test`

---

- **Solved on**: 22/05/2025
- **Time taken**: 00:03:03
- **Attempts**: 3
