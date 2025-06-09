# Problem 69: Sqrt(x)

- **Difficulty**: Easy
- **Topics**: Math, Binary Search
- **LeetCode Link**: [Problem URL](https://leetcode.com/problems/sqrtx/)

## Problem Description

Given a non-negative integer `x`, _return the square root of_ `x` _rounded down to the nearest integer_. The returned integer should be **non-negative** as well.

You **must not use** any built-in exponent function or operator.

For example, do not use `pow(x, 0.5)` in c++ or `x ** 0.5` in python.

**Example 1:**

> **Input:** x = 4  
> **Output:** 2  
> **Explanation:** The square root of 4 is 2, so we return 2.

**Example 2:**

> **Input:** x = 8  
> **Output:** 2  
> **Explanation:** The square root of 8 is 2.82842..., and since we round it down to the nearest integer, 2 is returned.

**Constraints:**

- `0 <= x <= 2³¹ - 1`

## Approach

To solve the problem of computing the square root of a non-negative integer `x` without using built-in exponentiation functions, we need to find the largest integer such that `i * i <= x`.

We'll implement two approaches:

  1. **Brute Force** — Linear search from `0` to `x`
  2. **Binary Search** — Optimal logarithmic search leveraging the monotonic property of squares

### Steps

**Brute Force:**

  1. Loop `i` from `0` to `x`.
  2. At each step, check if `i * i <= x`.
  3. If true, update `ans = i`. If `i * i > x`, break the loop.
  4. Return `ans`.

**Binary Search:**

1. Set search range as `left = 1`, `right = x / 2`.

2. Use binary search:

   1. Compute `mid = (left + right) / 2`  
   2. If `mid * mid == x`, return `mid`.  
   3. If `mid * mid < x`, update `ans = mid` and move `left = mid + 1`.  
   4. Else, move `right = mid - 1`.

3. Return `ans`.

## Solution

- **Language**: C++ (Binary Search)
- **File**: [solution.cpp](solution.cpp)

##

- **Language**: Java (Brute Force)
- **File**: [solution.java](solution.java)

## Notes

- Brute force is intuitive but inefficient for large inputs (e.g., `x = 2³¹ - 1`).
- Binary Search is preferred and performs significantly faster for large inputs.
- Java needs `(long)` casting to avoid integer overflow in `mid * mid` while C++ needs (`long long`) for the same.

### Complexity Analysis

#### Brute Force

- **Time Complexity**: `O(√x)`
- **Space Complexity**: `O(1)`

#### Binary Search

- **Time Complexity**: `O(log x)`
- **Space Complexity**: `O(1)`

## Test Cases

| Input        | Output  |
| ------------ | ------- |
| `4`          | `2`     |
| `8`          | `2`     |
| `0`          | `0`     |
| `1`          | `1`     |
| `2147395600` | `46340` |
| `2147483647` | `46340` |

See the [`tests`](./tests/) directory for more comprehensive test cases.

### Running Tests

- **C++ (Simple)**: `cd tests; g++ test.cpp ../solution.cpp -o test; ./test`
- **Python**: `cd tests; python test.py`
- **Java**: `javac .\solution.java tests/test.java; java -cp ".;tests" test`

---

## 📌 Pseudocode

```vbnet
Search space: [1, 8] (since 16/2 = 8)

Iteration 1: mid = 4,  4*4 = 16 ✔️ => return 4

For x = 10:
Iteration 1: mid = 4 → 4*4 = 16 > 10 → move left
Iteration 2: mid = 2 → 2*2 = 4 < 10 → ans = 2
Iteration 3: mid = 3 → 3*3 = 9 < 10 → ans = 3
Iteration 4: mid = 4 → 4*4 = 16 > 10 → stop

Result = 3
```

## 🔁 Related Problems

- [367. Valid Perfect Square](https://leetcode.com/problems/valid-perfect-square/) — Check if a number is a perfect square.
- [50. Pow(x, n)](https://leetcode.com/problems/powx-n/) — Fast power function (binary exponentiation).
- [744. Find Smallest Letter Greater Than Target](https://leetcode.com/problems/find-smallest-letter-greater-than-target/) — Another use of binary search logic.

---

> **Solved on**: 09/06/2025 |
> **Time taken**: 00:06:43 |
> **Attempts**: 6
