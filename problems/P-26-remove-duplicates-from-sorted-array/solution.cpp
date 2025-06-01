/*
 * LeetCode Problem: 26: Remove Duplicates from Sorted Array
 * Difficulty: Easy
 * Topics: Array, Two Pointers
 * Date Solved: 01/06/2025
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  int removeDuplicates(vector<int>& nums) {
    if (nums.empty()) return 0;

    int i = 0;
    for (int j = 1; j < nums.size(); j++)
      if (nums[i] != nums[j])
        nums[++i] = nums[j];

    return i + 1;
  }
};
