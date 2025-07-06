/*
 * LeetCode Problem: 75. Sort Colors
 * Difficulty: Medium
 * Topics: Array, Two Pointers, Sorting
 * Date Solved: 06/07/2025
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low = 0, mid = 0, high = nums.size() - 1;

        while (mid <= high) {
            if (nums[mid] == 0)
                swap(nums[low++], nums[mid++]);
            else if (nums[mid] == 1)
                mid++;
            else
                swap(nums[mid], nums[high--]);
        }
    }
};
