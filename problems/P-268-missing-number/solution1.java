/*
 * LeetCode Problem: 268. Missing Number
 * Difficulty: Easy
 * Topics: Array, Hash Table, Bit Manipulation, Math, Sorting, Binary Search
 * Date Solved: 05/07/2025
*/

import java.util.HashMap;

public class solution1 {
  public int missingNumber(int[] nums) {
    int n = nums.length;
    HashMap<Integer, Integer> freqMap = new HashMap<>();

    for (int i = 0; i < n; i++)
      freqMap.put(nums[i], freqMap.getOrDefault(nums[i], 0) + 1);

    for (int i = 1; i <= n; i++)
      if (!freqMap.containsKey(i))
        return i;

    return -1;
  }
}