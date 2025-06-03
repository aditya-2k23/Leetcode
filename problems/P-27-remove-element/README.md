# Problem 27: Remove Element

- **Difficulty**: Easy
- **Topics**: Array, Two Pointers
- **LeetCode Link**: [Problem URL](https://leetcode.com/problems/remove-element/)

## Problem Description

Given an integer array `nums` and an integer `val`, remove all occurrences of `val` in `nums` [in-place](https://en.wikipedia.org/wiki/In-place_algorithm). The order of the elements may be changed. Then return the number of elements in `nums` which are not equal to `val`.

Consider the number of elements in `nums` which are not equal to `val` be `k`, to get accepted, you need to do the following things:

Change the array `nums` such that the first `k` elements of `nums` contain the elements which are not equal to `val`. The remaining elements of `nums` are not important as well as the size of `nums`.
Return `k`.

**Custom Judge:**

The judge will test your solution with the following code:

> ```java
> int[] nums = [...]; // Input array
> int val = ...; // Value to remove
> int[] expectedNums = [...]; // The expected answer with correct length.
> // It is sorted with no values equaling val.
>
> int k = removeElement(nums, val); // Calls your implementation
>
> assert k == expectedNums.length;
> sort(nums, 0, k); // Sort the first k elements of nums
> for (int i = 0; i < actualLength; i++) {
>     assert nums[i] == expectedNums[i];
> }
> ```

If all assertions pass, then your solution will be accepted.

**Example 1:**

> Input: `nums` = `[3,2,2,3]`, `val` = `3`  
> Output: `2`, `nums` = `[2,2,_,_]`  
> Explanation: Your function should return `k = 2`, with the first two elements of `nums` being `2`.  
> It does not matter what you leave beyond the returned k (hence they are underscores).

**Example 2:**

> Input: `nums` = `[0,1,2,2,3,0,4,2]`, `val` = `2`  
> Output: `5`, `nums` = `[0,1,4,0,3,_,_,_]`  
> Explanation: Your function should return `k = 5`, with the first five elements of `nums` containing `0`, `0`, `1`, `3`, and `4`.  
> Note that the five elements can be returned in any order.  
> It does not matter what you leave beyond the returned k (hence they are underscores).

**Constraints:**

- `0 <= nums.length <= 100`
- `0 <= nums[i] <= 50`
- `0 <= val <= 100`

## Approach

### Two Pointers Technique

The idea is to use two pointers to traverse the array. One pointer (`i`) will track the position of the last unique element found, while the other pointer (`j`) will traverse through the array to find elements that are not equal to `val`.

### Steps

1. Initialize two pointers, `i` and `j`, both set to `0`.
2. Iterate through the array with the `j` pointer.
   - If `nums[j]` is not equal to `val`, copy `nums[j]` to `nums[i]` and increment both `i` and `j`.
   - If `nums[j]` is equal to `val`, just increment `j`.
3. After the loop, `i` will be the new length of the array without the `val` elements.
4. Return `i`.

#### Complexity Analysis

- **Time Complexity**: `O(n)`, where `n` is the length of the array.
- **Space Complexity**: `O(1)`, as we are modifying the array in place without using extra space.

## Solution

- **Language**: C++
- **File**: [solution.cpp](solution.cpp)

## Test Cases

See the [`tests/`](tests/) directory for the test cases.

### Running Tests

- **C++ (Simple)**: `cd tests; g++ test.cpp ../solution.cpp -o test; ./test`
- **Python**: `cd tests; python test.py`
- **Java**: `javac .\solution.java tests/test.java; java -cp ".;tests" test`

---

> **Solved on**: 03/06/2025 |
> **Time taken**: 00:07:26 |
> **Attempts**: 4
