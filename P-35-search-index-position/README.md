# Problem 35: Search Insert Position

- **Difficulty**: Easy
- **Topics**: Array, Binary Search
- **LeetCode Link**: [Problem URL](https://leetcode.com/problems/search-insert-position/)

## Problem Description

Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

You must write an algorithm with `O(log n)` runtime complexity.

**Example 1:**

```plaintext
Input: nums = [1,3,5,6], target = 5
Output: 2
```

**Example 2:**

```plaintext
Input: nums = [1,3,5,6], target = 2
Output: 1
```

**Example 3:**

```plaintext
Input: nums = [1,3,5,6], target = 7
Output: 4
```

**Constraints:**

- `1 <= nums.length <= 104`
- `104 <= nums[i] <= 104`
- `nums` contains **distinct** values sorted in **ascending** order.
- `-104 <= target <= 104`

## Approach

To solve the problem of finding the index of a target value in a sorted array, we can utilize a **binary search** algorithm. The **binary search** approach is efficient and meets the required `O(log n)` time complexity.
We will maintain two pointers, `left` and `right`, to represent the current search range. We will repeatedly narrow down the search range based on the comparison of the middle element with the target value until we find the target or determine the appropriate index for insertion.

### Steps:

1. Initialize two pointers, `left` and `right`, to the start and end of the array.
2. While `left` is less than or equal to `right`:
   - Calculate the middle index as `mid = left + (right - left) / 2`.
   - If the middle element is equal to the target, return `mid`.
   - If the middle element is less than the target, move the `left` pointer to `mid + 1`.
   - If the middle element is greater than the target, move the `right` pointer to `mid - 1`.
3. If the target is not found, return `left`, which will be the index where the target should be inserted.

## Solution

- **Language**: C++
- **File**: [solution.cpp](solution.cpp)

##

- **Python**: Python (Brute Force)
- **File**: [solution.py](solution.py)

## Notes

- Ensure to handle edge cases, such as when the target is less than the first element or greater than the last element of the array.
- If the array is empty, the target should be inserted at index `0`.

### Complexity Analysis (Binary Search)

- **Time Complexity**: `O(log n)`
- **Space Complexity**: `O(1)`

Although the question requires an `O(log n)` solution, we can also implement a brute force solution for educational purposes.
It involves iterating through the array and checking each element to find the target or determine the insertion index.

### Complexity Analysis (Brute Force)

- **Time Complexity**: `O(n)`
- **Space Complexity**: `O(1)`

## Test Cases

**Test Case 1**: nums = `[1,3,5,6]`, target = `5`
→ Output: `2`

**Test Case 2**: nums = `[1,3,5,6]`, target = `2`
→ Output: `1`

**Test Case 3**: nums = `[1,3,5,6]`, target = `7`
→ Output: `4`

### Running Tests

- **C++ (Simple)**: `cd tests; g++ test.cpp ../solution.cpp -o test; ./test`
- **Python**: `cd tests; python test.py`
- **Java**: `javac .\solution.java tests/test.java; java -cp ".;tests" test`

---

> **Solved on**: 30/05/2025 |
> **Time taken**: 00:27:39 |
> **Attempts**: 12
