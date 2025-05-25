/*
 * LeetCode Problem: 13: Roman to Integer
 * Difficulty: Easy
 * Topics: Hash Table, Math, String
 * Date Solved: 25/05/2025
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int convert(char c) {
        switch (c) {
        case 'I':
            return 1;
        case 'V':
            return 5;
        case 'X':
            return 10;
        case 'L':
            return 50;
        case 'C':
            return 100;
        case 'D':
            return 500;
        case 'M':
            return 1000;

        default:
            return 0;
        }
    }

    int romanToInt(string s) {
        int num = 0;
        int prev = 0;

        for (int i = s.size() - 1; i >= 0; i--) {
            int curr = convert(s[i]);

            if (curr < prev)
                num -= curr;
            else
                num += curr;
            prev = curr;
        }

        return num;
    }
};
