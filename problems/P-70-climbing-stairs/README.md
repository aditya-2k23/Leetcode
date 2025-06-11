# Problem 70: Climbing Stairs

- **Difficulty**: Easy
- **Topics**: Math, Dynamic Programming, Memoization, Recursion
- **LeetCode Link**: [Problem URL](https://leetcode.com/problems/climbing-stairs/)

## Problem Description

You are climbing a staircase. It takes `n` steps to reach the top.

Each time you can either climb `1` or `2` steps. In how many distinct ways can you climb to the top?

**Example 1:**

> **Input:** n = 2  
> **Output:** 2  
> **Explanation:** There are two ways to climb to the top.  
> 1 step + 1 step  
> 2 steps

**Example 2:**

> **Input:** n = 3  
> **Output:** 3  
> **Explanation:** There are three ways to climb to the top.  
> 1 step + 1 step + 1 step  
> 1 step + 2 steps  
> 2 steps + 1 step

**Constraints:**

- `1 <= n <= 45`

## Approach

### Dynamic Programming

We can solve this problem using dynamic programming. The idea is to use an array `dp` where `dp[i]` represents the number of distinct ways to reach the `i-th` step. The recurrence relation is:

```cpp
dp[i] = dp[i-1] + dp[i-2]
```

This means that to reach the `i-th` step, you can either come from the `(i - 1)-th` step (by taking 1 step) or from the `(i - 2)-th` step (by taking 2 steps).

#### Steps (DP Approach)

1. Initialize a `dp` array of size `n + 1`.
2. Set `dp[1] = 1` (1 way to reach the first step).
3. Set `dp[2] = 2` (2 ways to reach the second step).
4. Iterate from `3` to `n`, filling the `dp` array using the recurrence relation.
5. The answer will be in `dp[n]`.

### Memoization

We can also use memoization to optimize the recursive solution. The idea is to store the results of previously computed steps in a dictionary or an array to avoid redundant calculations.

#### Steps (Memoization Approach)

1. Check if the result for `n` is already computed.
2. If not, compute it using the recursive relation.
3. Store the result in the memoization structure.
4. Return the result for `n`.
5. Base cases: if `n` is `1`, return `1`; if `n` is `2`, return `2`.
6. For `n > 2`, return the sum of the results for `n - 1` and `n - 2`.

## Solution

- **Language**: Python (Dynamic Programming)
- **File**: [solution.py](solution.py)

##

- **Language**: Java (Memoization)
- **File**: [solution.java](solution.java)

## Complexity Analysis

### Dynamic Programming

- **Time Complexity**: `O(n)`
- **Space Complexity**: `O(n)`

### Memoization

- **Time Complexity**: `O(n)`
- **Space Complexity**: `O(n)`

## Test Cases

See the [`tests`](./tests/) directory for various test cases.

### Running Tests

- **C++ (Simple)**: `cd tests; g++ test.cpp ../solution.cpp -o test; ./test`
- **Python**: `cd tests; python test.py`
- **Java**: `javac .\solution.java tests/test.java; java -cp ".;tests" test`

---

> **Solved on**: 11/06/2025 |
> **Time taken**: 00:05:54 |
> **Attempts**: 8
