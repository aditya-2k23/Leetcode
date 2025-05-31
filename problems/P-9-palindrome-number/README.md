# Problem 9: Palindrome Number

- **Difficulty**: Easy
- **Topics**: Math, String Manipulation
- **LeetCode Link**: [Problem URL](https://leetcode.com/problems/palindrome-number/)

## Problem Description

Given an integer x, return true if x is a palindrome, and false otherwise.

**Example 1:**

```plaintext
Input: x = 121
Output: true
Explanation: 121 reads as 121 from left to right and from right to left.
```

**Example 2:**

```plaintext
Input: x = -121
Output: false
Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.
```

**Example 3:**

```plaintext
Input: x = 10
Output: false
Explanation: Reads 01 from right to left. Therefore it is not a palindrome.
```

**Constraints:**

```plaintext
-231 <= x <= 231 - 1
```

**Follow up**: Could you solve it without converting the _integer_ to a _string_?

## Approach

Convert the integer to a string and check if it reads the same forwards and backwards. Alternatively, we can reverse the number mathematically and compare it with the original number.

### Steps:

1. Check if the number is negative. If it is, return false.
2. Convert the number to a string.
3. Compare the string with its reverse.
4. If they are the same, return true; otherwise, return false.
5. Alternatively, reverse the number mathematically:
   - Initialize a variable to store the reversed number.
   - While the original number is greater than 0:
     - Get the last digit using modulo operation.
     - Append it to the reversed number.
     - Remove the last digit from the original number.
   - Finally, compare the reversed number with the original number.

## Solution

- **Language**: C++ (Mathematical Approach)
- **File**: [solution.cpp](solution.cpp)

##

- **Language**: Python (String Approach)
- **File**: [solution.py](solution.py)

##

- **Language**: Java (String Approach)
- **File**: [solution.java](solution.java)

## Notes

- The mathematical approach avoids converting the integer to a string, which is more efficient in terms of space complexity.
- The string approach is simpler and easier to understand, but it uses additional space for the string representation.

### Complexity Analysis

- **Time Complexity**: `O(log(n))`, where n is the input number. This is because we are dividing the number by 10 in each iteration.
- **Space Complexity**: `O(1)` for the mathematical approach, as we are using a constant amount of space. `O(n)` for the string approach, where n is the number of digits in the integer.

## Test Cases

- **Input**: `121`

  - **Output**: `true`

- **Input**: `-121`
  - **Output**: `false`

_(See `tests/` folder for automated test cases)_

### Running Tests

- **C++ (Simple)**: `cd tests; g++ test.cpp ../solution.cpp -o test; ./test`
- **Python**: `cd tests; python test.py`
- **Java**: `javac .\solution.java tests/test.java; java -cp ".;tests" test`

---

- **Solved on**: 23/05/2025
- **Time taken**: 00:11:28 (both approaches)
- **Attempts**: 8
