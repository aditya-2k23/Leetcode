/*
 * LeetCode Problem: 268. Missing Number
 * Difficulty: Easy
 * Topics: Array, Hash Table, Bit Manipulation, Math, Sorting, Binary Search
 * Date Solved: 05/07/2025
*/

public class solution2 {
  public int missingNumber(int[] nums) {
    int n = nums.length;
    int xor1 = 0, xor2 = 0;

    for (int i = 0; i < n; i++) {
      xor2 = xor2 ^ nums[i];
      xor1 = xor1 ^ (i + 1);
    }
    xor1 = xor1 ^ n;

    return (xor1 ^ xor2);
  }
}
