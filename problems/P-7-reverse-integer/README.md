# Problem 7. Reverse Integer

- **Difficulty**: Medium
- **Topics**: Math
- **LeetCode Link**: [Problem URL](https://leetcode.com/problems/reverse-integer/)

## Problem Description

Given a signed `32-bit` integer `x`, return `x` with its digits reversed. If reversing `x` causes the value to go outside the signed `32-bit` integer range `[-231, 231 - 1]`, then return `0`.

Assume the environment does not allow you to store `64-bit` integers (signed or unsigned).

**Example 1:**

```plaintext
Input: x = 123
Output: 321
```

**Example 2:**

```plaintext
Input: x = -123
Output: -321
```

**Example 3:**

```plaintext
Input: x = 120
Output: 21
```

**Constraints:**

`-231 <= x <= 231 - 1`

## Approach

### Mathematical

Reverse the integer mathematically by extracting the last digit of it and storing it at the starting of the reversed one. Also, checking for the constraints in each step so that the reversed digit does not overflow the integer bound.

#### Steps:

1. Create a another variable `temp` to store the initial value of `x`. Make `x = 0`.
2. In a loop while `temp` is not equal to `0`, store the digits one by one starting from the end to the starting of `x`.
3. Before actually adding the digits first check if `x` comes under the constraints or not. If not, return `0`.
4. At the last return `x` (reversed).

##

### String Conversion

We can also achieve reversing the digits by converting the `integer` to a `string`. For this, I chose `Python` for the ease of converting the data-types.

#### Steps:

1. First, create variables for the constraints as python doesn't have the `INT_MAX` or `INT_MIN` in-built.
2. Then, check if `x` is negative, if it is then convert the integer to a string with the negate of the integer `s = str(-x)`.
3. Reverse the number (string) by using slicing `s[::-1]`
4. Add the negative sign back `rev = -int(s[::-1])`
5. Check if `rev` falls in the constraints. If not, return `0`.

If `x` is positive then just convert it to string and reverse it and return it.

## Solution

- **Language**: C++
- **File**: [solution.cpp](solution.cpp)

##

- **Language**: Python
- **File**: [solution.py](solution.py)

## Notes

The mathemical approach is better and efficient than the string conversion one although both the approaches uses the same [complexities](#complexity-analysis).

It is just the execution speed which is dependant on the language we are using. `C++` compiles faster than `Python` and has a low memory usage.

### Complexity Analysis

- **Time Complexity**: `O(log x)`
- **Space Complexity**: `O(1)`

## Test Cases

See the [`/tests`](./tests/) folder for the test cases for both the languages.

### Running Tests

- **C++ (Simple)**: `cd tests; g++ test.cpp ../solution.cpp -o test; ./test`
- **Python**: `cd tests; python test.py`
- **Java**: `javac .\solution.java tests/test.java; java -cp ".;tests" test`

---

> **Solved on**: 26/05/2025 |
> **Time taken**: 00:15:06 |
> **Attempts**: 5
