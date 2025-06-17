# Problem 202: Happy Number

- **Difficulty**: Easy
- **Topics**: Hash Table, Math, Two Pointers
- **LeetCode Link**: [Problem URL](https://leetcode.com/problems/happy-number/)

## Problem Description

Write an algorithm to determine if a number `n` is happy.

A **happy number** is a number defined by the following process:

- Starting with any positive integer, replace the number by the sum of the squares of its digits.
- Repeat the process until the number equals 1 (where it will stay), or it **loops endlessly in a cycle** which does not include 1.
- Those numbers for which this process **ends in 1** are happy.

Return `true` _if_ `n` _is a happy number, and_ `false` _if not._

**Example 1:**

> **Input:** n = 19  
> **Output:** true  
> **Explanation:**  
> 1² + 9² = 82  
> 8² + 2² = 68  
> 6² + 8² = 100  
> 1² + 0² + 0² = 1  

**Example 2:**

> **Input:** n = 2  
> **Output:** false

**Constraints:**

- `1 <= n <= 2³¹ - 1`

## Approach

### Hash Map Approach

To determine if a number `n` is a happy number, we can use the following approach:

1. **Calculate the sum of the squares of its digits** repeatedly.
2. **Use a hash map** to keep track of the numbers we have seen during the process.
3. If we encounter a number that we have seen before, it means we are in a cycle and `n` is not a happy number.
4. If we reach the number `1`, then `n` is a happy number.
5. Continue this process until we either find a cycle or reach `1`.
6. Return `true` if `n` is a happy number, otherwise return `false`.

#### Steps

1. Initialize an empty hash map to store seen numbers.
2. While `n` is not `1` and `n` is not in the
    hash map:
    - Add `n` to the hash map.
    - Calculate the sum of the squares of the digits of `n`.
    - Update `n` to this new value.
3. If `n` equals `1`, return `true`.
4. If we exit the loop because `n` is in the hash map, return `false`.

### Two Pointers Approach (Floyd's Cycle Detection || Tortoise and Hare)

An alternative approach to detect cycles in the sequence of sums of squares of digits is to use the **Floyd's Cycle Detection Algorithm** (also known as the Tortoise and Hare algorithm). This method uses two pointers that move at different speeds to detect cycles without using extra space.

#### Steps

1. **Initialize** two pointers: `slow` and `fast`, both set to the initial number `n`.
2. **Repeat the following until `fast` becomes 1 or `slow == fast`**:
   - Move `slow` one step:  
     `slow = sumOfSquares(slow)`
   - Move `fast` two steps:  
     `fast = sumOfSquares(sumOfSquares(fast))`
3. **If `fast == 1`**, return `true`.  
   → It means the number is a happy number.
4. **If `slow == fast`** (and not 1), return `false`.  
   → A cycle is detected, so the number is not happy.

## Solution

- **Language**: C++
- **File**: [solution.cpp](solution.cpp)

##

- **Language**: Java
- **File**: [solution.java](solution.java)

## Notes

- The hash map approach is straightforward and easy to implement, but it uses extra space.
- The two pointers approach is more space-efficient and can be faster in practice, as it avoids the overhead of maintaining a hash map.
- Both approaches have the same time complexity, but the two pointers approach is more space-efficient.

### Complexity Analysis

#### Hash Map

- **Time Complexity**: `O(1)` (practically)  
  The time complexity is determined by the number of iterations needed to reach `1` or detect a cycle. In the worst case, it can be linear with respect to the number of digits in `n`.
- **Space Complexity**: `O(1)` (practically)  
  Because the hash map will store a limited number of unique sums of squares of digits, which is bounded by the maximum possible value of `n`.

#### Two Pointers

- **Time Complexity**: `O(1)`  
  The time complexity is similar to the hash map approach, as it also depends on the number of iterations needed to reach `1` or detect a cycle.
- **Space Complexity**: `O(1)`

## Test Cases

See the [`tests`](./tests/) directory for test cases.

### Running Tests

- **C++ (Simple)**: `cd tests; g++ test.cpp ../solution.cpp -o test; ./test`
- **Python**: `cd tests; python test.py`
- **Java**: `javac .\solution.java tests/test.java; java -cp ".;tests" test`

---

> **Solved on**: 17/06/2025 |
> **Time taken**: 00:23:09 |
> **Attempts**: 1
