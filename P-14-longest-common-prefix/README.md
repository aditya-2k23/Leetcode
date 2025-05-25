# Problem 14: Longest Common Prefix

- **Difficulty**: Easy
- **Topics**: String, Trie
- **LeetCode Link**: [Problem URL](https://leetcode.com/problems/longest-common-prefix/)

## Problem Description

Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string `""`.

**Example 1:**

```plaintext
Input: strs = ["flower","flow","flight"]
Output: "fl"
```

**Example 2:**

```plaintext
Input: strs = ["dog","racecar","car"]
Output: ""
Explanation: There is no common prefix among the input strings.
```

**Constraints:**

```plaintext
1 <= strs.length <= 200
0 <= strs[i].length <= 200
strs[i] consists of only lowercase English letters if it is non-empty.
```

## Approach

The simplest approach to find the longest common prefix is to sort the array of strings and then compare the first and last strings. The common prefix of these two will be the longest common prefix for the entire array.

This is because sorting arranges the strings in lexicographical order, so the first and last strings will have the maximum difference in characters, and their common prefix will be the longest.

### Steps:

1. Sort the array of strings.
2. Compare the first and last strings character by character.
3. Find the common prefix and return it.

##

Another approach is to use vertical scanning, where we compare characters of each string column by column and stops at the first mismatch.

### Steps:

1. Check for empty input

   - If the string array is empty or null, return an empty string `""`.

2. Loop over characters of the first string

   - For each character `c` at position `i` in the first string, compare it with the character at the same position `i` in all other strings.

3. Compare characters column-wise (vertically)

   - Use a nested loop to iterate through each string (from the 2nd to the last).

   - For each string, check:

     - If the index `i` exceeds the current string’s length → it’s too short → break.

     - If the character at position `i` is not equal to `c` → mismatch → break.

4. Return the prefix so far if any mismatch or end of any string is found

   - If a mismatch or out-of-bound index is found, return the substring from the first string: `strs[0].substring(0, i)`.

5. **If the loop completes fully**

   - It means all characters matched across all strings.

   - Return the entire first string as the common prefix.

## Solution

- **Language**: C++
- **File**: [solution.cpp](solution.cpp)

##

- **Language**: Java
- **File**: [solution.java](solution.java)

## Notes

The vertical scanning approach is more efficient and straightforward for this problem, as it avoids the overhead of sorting and directly compares characters across all strings.

### Vertical Scanning Approach

#### Complexity Analysis

- **Time Complexity**: `O(n \* m)`, where n is the number of strings and m is the length of the shortest string.
- **Space Complexity**: `O(1)`, as we are using a constant amount of space.

### Sorting First and Last Approach

- **Time Complexity**: `O(nlogn)`, where n is the number of strings (due to sorting).
- **Space Complexity**: `O(1)`, as we are not using any additional data structures.

## Test Cases

```plaintext
Input: strs = ["flower","flow","flight"]
Output: "fl"
```

```plaintext
Input: strs = ["dog","racecar","car"]
Output: ""
```

### Running Tests

- **C++ (Simple)**: `cd tests; g++ test.cpp ../solution.cpp -o test; ./test`
- **Python**: `cd tests; python test.py`
- **Java**: `javac .\solution.java tests/test.java; java -cp ".;tests" test`

---

> **Solved on**: 25/05/2025 |
> **Time taken**: 00:06:32 |
> **Attempts**: 4
