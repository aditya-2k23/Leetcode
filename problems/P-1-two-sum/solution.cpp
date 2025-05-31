/*
 * LeetCode Problem: 1. Two Sum
 * Difficulty: Easy
 * Topics: [Array, Hash Table]
 * Date Solved: 22-05-2025
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Brute Force
    class Brute {
    public:
        vector<int> twoSum(const vector<int> &nums, int target) {
            for (int i = 0; i < nums.size(); i++)
                for (int j = i + 1; j < nums.size(); j++)
                    if (nums[i] + nums[j] == target)
                        return {i, j};
            return {};
        }
    };

    // Optimal Solution using Hash Map
    vector<int> twoSum(const vector<int> &nums, int target) {
        unordered_map<int, int> mp;

        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            if (mp.find(complement) != mp.end())
                return {mp[complement], i};
            mp[nums[i]] = i;
        }

        return {};
    }
};
