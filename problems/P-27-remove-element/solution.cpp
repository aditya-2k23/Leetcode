/*
 * LeetCode Problem: 27. Remove Element
 * Difficulty: Easy
 * Topics: Array, Two Pointers
 * Date Solved: 03/06/2025
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  int removeElement(vector<int>& nums, int val) {
    int i = 0;
    for (int j = 0; j < nums.size(); j++)
      if (nums[j] != val)
        nums[i++] = nums[j];

    return i;
  }
};
