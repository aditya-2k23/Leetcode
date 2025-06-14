# Problem 8: String to Integer (atoi)

- **Difficulty**: Medium
- **Topics**: String
- **LeetCode Link**: [Problem URL](https://leetcode.com/problems/string-to-integer-atoi/)

## Problem Description

Implement the `myAtoi(string s)` function, which converts a string to a 32-bit signed integer.

The algorithm for `myAtoi(string s)` is as follows:

1. **Whitespace:** Ignore any leading whitespace (`" "`).
2. **Signedness:** Determine the sign by checking if the next character is `'-'` or `'+'`, assuming positivity if neither present.
3. **Conversion:** Read the integer by skipping leading zeros until a non-digit character is encountered or the end of the string is reached. If no digits were read, then the result is 0.
4. **Rounding:** If the integer is out of the 32-bit signed integer range `[-2³¹, 2³¹ - 1]`, then round the integer to remain in the range. Specifically, integers less than `-2³¹` should be rounded to `-2³¹`, and integers greater than `2³¹ - 1` should be rounded to `2³¹ - 1`.

Return the integer as the final result.

**Example 1:**

> **Input:** s = "42"
>
> **Output:** 42
>
> **Explanation:**
>
> The underlined characters are what is read in and the caret is the current reader position.  
> Step 1: "42" (no characters read because there is no leading whitespace)  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;^  
> Step 2: "42" (no characters read because there is neither a '-' nor '+')  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;^  
> Step 3: "<u>42</u>" ("42" is read in)  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;^  

**Example 2:**

> **Input:** s = " -042"
>
> **Output:** -42
>
> **Explanation:**
>
> Step 1: "\_\_\_-042" (leading whitespace is read and ignored)  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;^  
> Step 2: "&nbsp;&nbsp;&nbsp;<u>-</u>042" ('-' is read, so the result should be negative)  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;^  
> Step 3: "&nbsp;&nbsp;&nbsp;-<u>042</u>" ("042" is read in, leading zeros ignored in the result)  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;^

**Example 3:**

> **Input:** s = "1337c0d3"  
>
> **Output:** 1337  
>
>**Explanation:**
>
> Step 1: "1337c0d3" (no characters read because there is no leading whitespace)  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;^  
Step 2: "1337c0d3" (no characters read because there is neither a '-' nor '+')  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;^  
Step 3: "<u>1337</u>c0d3" ("1337" is read in; reading stops because the next character is a non-digit)  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;^  

**Example 4:**

> **Input:** s = "0-1"
>
> **Output:** 0
>
> **Explanation:**
>
> Step 1: "0-1" (no characters read because there is no leading whitespace)  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;^  
> Step 2: "0-1" (no characters read because there is neither a '-' nor '+')  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;^  
> Step 3: "<u>0</u>-1" ("0" is read in; reading stops because the next character is a non-digit)  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;^  

**Example 5:**

>
> **Input:** s = "words and 987"
>
> **Output:** 0
>
> **Explanation:** Reading stops at the first non-digit character 'w'.

**Constraints:**

- `0 <= s.length <= 200`
- `s` consists of English letters (lower-case and upper-case), digits `(0-9)`, `' '`, `'+'`, `'-'`, and `'.'`.

## Approach

This problem requires converting a string to a 32-bit signed integer, handling leading whitespace, signedness, and potential overflow. The solution involves iterating through the string while applying the rules specified in the problem statement.

### Steps

1. Skip leading whitespace characters.
2. Check for a sign character (`'-'` or `'+'`) and set the sign accordingly.
3. Read digits until a non-digit character is encountered, constructing the integer.
4. Handle overflow by checking if the number exceeds the 32-bit signed integer limits.
5. Return the final integer value, applying the sign.

## Solution

- **Language**: C++
- **File**: [solution.cpp](solution.cpp)

##

- **Language**: Java
- **File**: [solution.java](solution.java)

## Notes

Ensure to handle edge cases such as leading zeros, non-digit characters, and overflow conditions.

### Complexity Analysis

- **Time Complexity**: `O(n)`, where `n` is the length of the string `s`. The algorithm processes each character at most once.
- **Space Complexity**: `O(1)`, as we are using a constant amount of space for variables.

## Test Cases

Some test cases to validate the solution:

### Running Tests

- **C++ (Simple)**: `cd tests; g++ test.cpp ../solution.cpp -o test; ./test`
- **Python**: `cd tests; python test.py`
- **Java**: `javac .\solution.java tests/test.java; java -cp ".;tests" test`

---

> **Solved on**: 14/06/2025 |
> **Time taken**: 00:15:11 |
> **Attempts**: 5
