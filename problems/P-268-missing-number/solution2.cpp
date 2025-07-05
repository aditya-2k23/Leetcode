/*
 * LeetCode Problem: 268. Missing Number
 * Difficulty: Easy
 * Topics: Array, Hash Table, Bit Manipulation, Math, Sorting, Binary Search
 * Date Solved: 05/07/2025
*/

#include <bits/stdc++.h>
using namespace std;

class Solution2 {
public:
  int missingNumber(vector<int>& nums) {
    sort(nums.begin(), nums.end());

    int left = 0, right = nums.size();
    while (left < right) {
      int mid = left + (right - left) / 2;
      if (nums[mid] > mid)
        right = mid;
      else
        left = mid + 1;
    }

    return left;
  }
};