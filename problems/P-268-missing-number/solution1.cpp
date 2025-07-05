/*
 * LeetCode Problem: 268. Missing Number
 * Difficulty: Easy
 * Topics: Array, Hash Table, Bit Manipulation, Math, Sorting, Binary Search
 * Date Solved: 05/07/2025
*/

#include <bits/stdc++.h>
using namespace std;

class Solution1 {
private:
    bool search(vector<int>& arr, int k) {
        for (int i = 0; i < arr.size(); i++)
            if (arr[i] == k)
                return true;
        return false;
    }

public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();

        vector<int> arr;
        for (int i = 0; i <= n; i++)
            arr.push_back(i);

        for (int i = 0; i <= n; i++)
            if (!search(nums, arr[i]))
                return arr[i];

        return -1;
    }
};
