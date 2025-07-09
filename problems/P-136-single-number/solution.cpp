/*
 * LeetCode Problem: 136. Single Number
 * Difficulty: Easy
 * Topics: Array, Bit Manipulation
 * Date Solved: 09/07/2025
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> map;
        for (int i : nums) {
            if (map.count(i))
                map[i]++;
            else
                map[i] = 1;
        }

        for (int i : nums)
            if (map[i] == 1)
                return i;

        return -1;
    }
};
