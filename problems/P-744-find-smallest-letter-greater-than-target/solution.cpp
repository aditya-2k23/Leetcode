/*
 * LeetCode Problem: 744. Find Smallest Letter Greater Than Target
 * Difficulty: Easy
 * Topics: Array, Binary Search
 * Date Solved: 06/06/2025
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  char nextGreatestLetter(vector<char>& letters, char target) {
    int low = 0, high = letters.size() - 1;

    while (low <= high) {
      int mid = low + (high - low) / 2;

      if (letters[mid] <= target)
        low = mid + 1;
      else
        high = mid - 1;
    }

    return letters[low % letters.size()];
  }
};
