# Problem 26: Remove Duplicates from Sorted Array

- **Difficulty**: Easy
- **Topics**: Array, Two Pointers
- **LeetCode Link**: [Problem URL](https://leetcode.com/problems/remove-duplicates-from-sorted-array/)

## Problem Description

Given an integer array `nums` sorted in **non-decreasing order**, remove the duplicates [in-place](https://en.wikipedia.org/wiki/In-place_algorithm) such that each unique element appears only **once**. The **relative order** of the elements should be kept the **same**. Then return the number of unique elements in `nums`.

Consider the number of unique elements of `nums` to be `k`, to get accepted, you need to do the following things:

- Change the array `nums` such that the first `k` elements of `nums` contain the unique elements in the order they were present in `nums` initially. The remaining elements of `nums` are not important as well as the size of `nums`.
- Return `k`.

**Custom Judge:**

The judge will test your solution with the following code:

> ```java
> int[] nums = [...]; // Input array
> int[] expectedNums = [...]; // The expected answer with correct length
>
> int k = removeDuplicates(nums); // Calls your implementation
>
> assert k == expectedNums.length;
> for (int i = 0; i < k; i++) {
>     assert nums[i] == expectedNums[i];
> }
> ```

If all assertions pass, then your solution will be **accepted**.

**Example 1:**

> **Input:** nums = [1,1,2]  
> **Output:** 2, nums = [1,2,_]  
> **Explanation:** Your function should return k = 2, with the first two elements of nums being 1 and 2 respectively.
> It does not matter what you leave beyond the returned k (hence they are underscores).

**Example 2:**

> **Input:** nums = [0,0,1,1,1,2,2,3,3,4]  
> **Output:** 5, nums = [0,1,2,3,4,_,_,_,_,_]  
> **Explanation:** Your function should return k = 5, with the first five elements of nums being 0, 1, 2, 3, and 4 respectively.
> It does not matter what you leave beyond the returned k (hence they are underscores).

**Constraints:**

- `1 <= nums.length <= "3 × 10⁴`
- `-100 <= nums[i] <= 100`
- `nums` is sorted in **non-decreasing** order.

## Approach

### Two Pointers Technique

The idea is to use two pointers to traverse the array. One pointer (`i`) will track the position of the last unique element found, while the other pointer (`j`) will traverse through the array to find new unique elements.

### Steps: (Two Pointers)

1. Initialize a pointer `i` at the start of the array.
2. Iterate through the array with another pointer `j` starting from the second element.
3. For each element at `j`, check if it is different from the element at `i`.
4. If it is different, increment `i` and update `nums[i]` to `nums[j]`.
5. Continue until the end of the array.
6. The length of the unique elements will be `i + 1`.

#### Complexity Analysis

- **Time Complexity**: `O(n)`, where n is the length of the array.
- **Space Complexity**: `O(1)`, since we are modifying the array in place and not using any additional data structures.

### Brute Force Approach (Not Recommended)

The brute force approach would involve using a set to track unique elements and then copying them back to the original array. This is less efficient and not in line with the problem's requirements for in-place modification.

### Steps: (Brute Force)

1. Create a set to store unique elements.
2. Iterate through the array and add each element to the set.
3. Convert the set back to a list and copy the unique elements back to the original array.
4. Return the length of the unique elements.

#### Complexity Analysis

- **Time Complexity**: `O(n²)`, where n is the length of the array.
- **Space Complexity**: `O(n)`, due to the use of a set to store unique elements.

## Solution

- **Language**: C++ _(Two Pointers)_
- **File**: [solution.cpp](solution.cpp)

##

- **Language**: Python _(Brute Force and Two Pointers)_
- **File**: [solution.py](solution.py)

## Test Cases

See the [`tests`](tests) directory for various test cases.

### Running Tests

- **C++ (Simple)**: `cd tests; g++ test.cpp ../solution.cpp -o test; ./test`
- **Python**: `cd tests; python test.py`
- **Java**: `javac .\solution.java tests/test.java; java -cp ".;tests" test`

---

> **Solved on**: 01/06/2025 |
> **Time taken**: 00:09:05 |
> **Attempts**: 5
