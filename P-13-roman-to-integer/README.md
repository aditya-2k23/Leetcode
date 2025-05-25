# Problem 13: Roman to Integer

- **Difficulty**: Easy
- **Topics**: Hash Table, Math, String
- **LeetCode Link**: [Problem URL](https://leetcode.com/problems/roman-to-integer/)

## Problem Description

Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.

Symbol Value
| Symbol | Value |
|--------|-------|
| I | 1 |
| V | 5 |
| X | 10 |
| L | 50 |
| C | 100 |
| D | 500 |
| M | 1000 |

For example, `2` is written as `II` in Roman numeral, just two ones added together. `12` is written as `XII`, which is simply `X + II`. The number `27` is written as `XXVII`, which is `XX + V + II`.

Roman numerals are usually written largest to smallest from left to right. However, the numeral for four is not `IIII`. Instead, the number four is written as `IV`. Because the one is before the five we subtract it making four. The same principle applies to the number nine, which is written as `IX`. There are six instances where subtraction is used:

- `I` can be placed before `V` (5) and `X` (10) to make 4 and 9.
- `X` can be placed before `L` (50) and `C` (100) to make 40 and 90.
- `C` can be placed before `D` (500) and `M` (1000) to make 400 and 900.

Given a roman numeral, convert it to an integer.

**Example 1:**

```plaintext
Input: s = "III"
Output: 3
Explanation: III = 3.
```

**Example 2:**

```plaintext
Input: s = "LVIII"
Output: 58
Explanation: L = 50, V= 5, III = 3.
```

**Example 3:**

```plaintext
Input: s = "MCMXCIV"
Output: 1994
Explanation: M = 1000, CM = 900, XC = 90 and IV = 4.
```

**Constraints:**

```plaintext
1 <= s.length <= 15
s contains only the characters ('I', 'V', 'X', 'L', 'C', 'D', 'M').
It is guaranteed that s is a valid roman numeral in the range [1, 3999].
```

## Approach

The most efficient way to use a Map to store the values of Roman numeral symbols and iterate through the string to calculate the integer value. If a smaller numeral precedes a larger numeral, we subtract the smaller from the larger; otherwise, we add the values.

Another approach is to create a function that converts each Roman numeral character to its integer value and processes the string from last to first, applying the subtraction or addition logic as needed.

### Steps:

#### Hash Map Approach

1. Create a hash map to store the values of each Roman numeral symbol.
2. Initialize a variable to keep track of the total value.
3. Iterate through the string from left to right.
4. For each character, check its value against the value of the next character (if it exists).
5. If the current character is less than the next character, subtract its value from the total; otherwise, add its value.
6. Return the total value.

#### Reverse Iteration Approach (Optimal)

1. Create a function to convert each Roman numeral characters to their integer values.
2. Initialize a variable to keep track of the total value.
3. Iterate through the string from the end to the beginning.
4. For each character, check if it is less than the previous character (to handle subtraction).
5. If it is less, subtract its value from the total; otherwise, add its value.
6. Return the total value.

## Solution

- **Language**: Python
- **File**: [solution.py](solution.py)

##

- **Language**: C++
- **File**: [solution.cpp](solution.cpp)

### Complexity Analysis

- **Time Complexity**: `O(n)`, where `n` is the length of the input string `s`. We traverse the string once.
- **Space Complexity**: `O(1)`, since the hash map size is constant (only 7 symbols).

## Test Cases

- **Input**: "III"

  - **Output**: 3

- **Input**: "LVIII"

  - **Output**: 58

- **Input**: "MCMXCIV"
  - **Output**: 1994

### Running Tests

- **C++ (Simple)**: `cd tests; g++ test.cpp ../solution.cpp -o test; ./test`
- **Python**: `cd tests; python test.py`

---

- **Solved on**: 24/05/2025
- **Time taken**: 00:07:01
- **Attempts**: 10
