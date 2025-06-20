# Problem 242: Valid Anagram

- **Difficulty**: Easy
- **Topics**: Hash Table, String, Sorting
- **LeetCode Link**: [Problem URL](https://leetcode.com/problems/valid-anagram/)

## Problem Description

Given two strings `s` and `t`, return true if `t` is an [anagram](## "An anagram is a word or phrase formed by rearranging the letters of a different word or phrase, using all the original letters exactly once.") of `s`, and `false` otherwise.

**Example 1:**

> Input: s = "anagram", t = "nagaram"  
> Output: true

**Example 2:**

> Input: s = "rat", t = "car"  
> Output: false

**Constraints:**

- `1 <= s.length, t.length <= 5 * 10⁴`
- `s` and `t` consist of lowercase English letters.

**Follow up:** What if the inputs contain Unicode characters? How would you adapt your solution to such a case?

## Approach

### Sorting Approach

1. Sort both strings and compare them.
2. If they are equal, return true; otherwise, return false.

#### Steps

1. Sort both strings `s` and `t`.
2. Compare the sorted strings.
3. If they are equal, return true; otherwise, return false.

### Hash Table Approach

1. Count the frequency of each character in both strings using a hash table (or dictionary).
2. Compare the frequency counts.
3. If the counts are equal, return true; otherwise, return false.

#### Steps

1. Create a frequency count for each character in string `s`.
2. Create a frequency count for each character in string `t`.
3. Compare the two frequency counts.
4. If they are equal, return true; otherwise, return false.

## Solution

- **Language**: C++ (Sorting Approach)
- **File**: [solution.cpp](solution.cpp)

##

- **Language**: Java (Hash Table Approach)
- **File**: [solution.java](solution.java)

## Notes

### Complexity Analysis

- **Time Complexity**:
  - Sorting Approach: O(n log n), where n is the length of the strings.
  - Hash Table Approach: O(n), where n is the length of the strings.
- **Space Complexity**:
  - Sorting Approach: O(1) if we ignore the space used by the sorting algorithm.
  - Hash Table Approach: O(1) for the frequency count since the alphabet size is constant (26 lowercase letters).

## Test Cases

See the [`tests`](/tests) directory for test cases.

### Running Tests

- **C++ (Simple)**: `cd tests; g++ test.cpp ../solution.cpp -o test; ./test`
- **Python**: `cd tests; python test.py`
- **Java**: `javac .\solution.java tests/test.java; java -cp ".;tests" test`

---

> **Solved on**: 20/06/2025 |
> **Time taken**: 00:27:24 |
> **Attempts**: 4
