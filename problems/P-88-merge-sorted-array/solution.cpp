/*
 * LeetCode Problem: 88: Merge Sorted Array
 * Difficulty: Easy
 * Topics: Array, Two Pointers, Sorting
 * Date Solved: 06/06/2025
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  // Brute Force Approach
  void BruteMerge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    for (int i : nums2)
      nums1.push_back(i);

    for (int i = 0; i < n; i++)
      nums1.erase(find(nums1.begin(), nums1.end(), 0));

    sort(nums1.begin(), nums1.end());
  }

  // Two Pointers Approach
  void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int i = m - 1;
    int j = n - 1;
    int k = m + n - 1;

    while (i >= 0 && j >= 0) {
      if (nums1[i] > nums2[j])
        nums1[k--] = nums1[i--];
      else
        nums1[k--] = nums2[j--];
    }

    while (j >= 0)
      nums1[k--] = nums2[j--];
  }
};