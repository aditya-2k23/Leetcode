/*
 * LeetCode Problem: 485. Max Consecutive Ones
 * Difficulty: Easy
 * Topics: Array
 * Date Solved: 06/07/2025
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxCount = 0, count = 0;
        for (int num : nums) {
            if (num == 1)
                count++;
            else
                count = 0;
            maxCount = max(maxCount, count);
        }

        return maxCount;
    }
};
