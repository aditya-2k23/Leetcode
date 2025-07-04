/*
 * LeetCode Problem: 189. Rotate Array
 * Difficulty: Medium
 * Topics: Array, Math, Two Pointers
 * Date Solved: 04/07/2025
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // nums = 1, 2, 3, 4, 5, 6, 7 | k = 3
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        if (n == 0)
            return;

        k %= n;
        if (k > n)
            return;

        int pos = n - k;
        vector<int> temp(k);
        for (int i = pos; i < n; i++)
            temp[i - pos] = nums[i];
        // 5, 6, 7

        for (int i = pos - 1; i >= 0; i--)
            nums[i + k] = nums[i];
        // nums = 1, 2, 3, 1, 2, 3, 4

        for (int i = 0; i < k; i++)
            nums[i] = temp[i];
    }
};
