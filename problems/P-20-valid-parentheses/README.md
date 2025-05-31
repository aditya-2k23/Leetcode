# Problem 20: Valid Parentheses

- **Difficulty**: Easy
- **Topics**: String, Stack
- **LeetCode Link**: [Problem URL](https://leetcode.com/problems/valid-parentheses/)

## Problem Description

Given a string s containing just the characters `'('`, `')'`, `'{'`, `'}'`, `'['` and `']'`, determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
Every close bracket has a corresponding open bracket of the same type.

**Example 1:**

```plaintext
Input: s = "()"

Output: true
```

**Example 2:**

```plaintext
Input: s = "()[]{}"

Output: true
```

**Example 3:**

```plaintext
Input: s = "(]"

Output: false
```

**Example 4:**

```plaintext
Input: s = "([])"

Output: true
```

**Constraints:**

```plaintext
1 <= s.length <= 104
s consists of parentheses only '()[]{}'.
```

## Approach

### Brute Force

The simplest and brute-force approach would be to replace the brackets with an empty string until no more pairs can be removed. However, this is inefficient for larger strings.

#### Steps:

1. Initialize a loop that continues until no more pairs of brackets can be removed.
2. In each iteration, check for pairs of brackets and remove them.
3. If the string is empty at the end, return true; otherwise, return false.

### Stack-Based (Optimal)

A more efficient approach is to use a stack data structure. We can iterate through the string, pushing opening brackets onto the stack and popping them when we encounter a closing bracket. If the stack is empty at the end of the iteration, the string is valid.

#### Steps:

1. Initialize an empty stack.
2. Create a mapping of closing brackets to their corresponding opening brackets.
3. Iterate through the string, pushing opening brackets onto the stack and popping them when encountering closing brackets.
4. If the stack is empty at the end, return true; otherwise, return false.

## Solution

- **Language**: C++
- **Approach**: Stack-Based (Optimal)
- **File**: [solution.cpp](solution.cpp)

##

- **Language**: Python
- **Approach**: Stack-Based (Optimal)
- **File**: [solution.py](solution.py)

##

- **Language**: Java
- **Approach**: Brute Force
- **File**: [solution.java](solution.java)

## Notes

### Complexity Analysis (Brute Force)

- **Time Complexity**: O(n^2) in the worst case, where n is the length of the string. This is because we may need to iterate through the string multiple times to remove all pairs.
- **Space Complexity**: O(1) if we ignore the space used by the input string, as we are not using any additional data structures.

---

Image representation of the stack-based approach:

[![Stack-Based Approach](https://files.prepinsta.com/2022/02/Balanced-Parenthesis-problem-C-1024x514.webp)](https://prepinsta.com/c-program/program-to-check-the-balance-of-parenthesis/)

> _&copy; [PrepInsta](https://prepinsta.com/c-program/program-to-check-the-balance-of-parenthesis/)_

### Complexity Analysis (Optimal Approach)

- **Time Complexity**: O(n), where n is the length of the string. Each character is processed once.
- **Space Complexity**: O(n) in the worst case, where n is the length of the string, due to the stack used to store opening brackets.

## Test Cases

See the [`tests`](./tests) folder for various test cases.

### Running Tests

- **C++ (Simple)**: `cd tests; g++ test.cpp ../solution.cpp -o test; ./test`
- **Python**: `cd tests; python test.py`
- **Java**: `javac .\solution.java tests/test.java; java -cp ".;tests" test`

---

> **Solved on**: 28/05/2025 |
> **Time taken**: 00:07:10 |
> **Attempts**: 6
