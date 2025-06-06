# Problem 744: Find Smallest Letter Greater Than Target

- **Difficulty**: Easy
- **Topics**: Array, Binary Search
- **LeetCode Link**: [Problem URL](https://leetcode.com/problems/find-smallest-letter-greater-than-target/)

## Problem Description

You are given an array of characters `letters` that is sorted in **non-decreasing order**, and a character `target`. There are **at least two different** characters in `letters`.

Return the smallest character in `letters` that is lexicographically greater than `target`. If such a character does not exist, return the first character in `letters`.

**Example 1:**

> **Input:** letters = ["c","f","j"], target = "a"  
> **Output:** "c"  
> **Explanation:** The smallest character that is lexicographically greater than 'a' in letters is 'c'.

**Example 2:**

> **Input:** letters = ["c","f","j"], target = "c"  
> **Output:** "f"  
> **Explanation:** The smallest character that is lexicographically greater than 'c' in letters is 'f'.

**Example 3:**

> **Input:** letters = ["x","x","y","y"], target = "z"  
> **Output:** "x"  
> **Explanation:** There are no characters in letters that is lexicographically greater than 'z' so we return letters[0].

**Constraints:**

- `2 <= letters.length <= 10⁴`
- `letters[i]` is a lowercase English letter.
- `letters` is sorted in **non-decreasing** order.
- `letters` contains at least two different characters.
- `target` is a lowercase English letter.

## Approach

To solve the problem of finding the smallest letter greater than a given target in a sorted array of characters, we can utilize a binary search approach. This is efficient due to the sorted nature of the input array, allowing us to quickly narrow down the search space.

### Steps

1. Initialize two pointers, `low` and `high`, to represent the current search range within the `letters` array.
2. While `low` is less than or equal to `high`, calculate the middle index `mid`.
3. If the character at `mid` is less than or equal to the `target`, move the `low` pointer to `mid + 1` to search in the right half.
4. If the character at `mid` is greater than the `target`, move the `high` pointer to `mid - 1` to search in the left half.
5. After the loop, the `low` pointer will be positioned at the smallest character greater than the `target`, or at the end of the array if no such character exists.
6. Return the character at the `low` pointer, wrapping around to the start of the array if necessary.

## Solution

- **Language**: C++
- **File**: [solution.cpp](solution.cpp)

## Notes

- Ensure that the input `letters` is sorted in non-decreasing order.

### Complexity Analysis

- **Time Complexity**: `O(log n)`
  - The binary search reduces the search space by half with each iteration, leading to logarithmic time complexity.
- **Space Complexity**: `O(1)`
  - The algorithm uses a constant amount of space for the pointers and does not require any additional data structures.

## Test Cases

See the [`tests`](./tests/) directory for various test cases.

### Running Tests

- **C++ (Simple)**: `cd tests; g++ test.cpp ../solution.cpp -o test; ./test`
- **Python**: `cd tests; python test.py`
- **Java**: `javac .\solution.java tests/test.java; java -cp ".;tests" test`

---

> **Solved on**: 06/06/2025 |
> **Time taken**: 00:06:14 |
> **Attempts**: 2
