/*
 * LeetCode Problem: 7. Reverse Integer
 * Difficulty: Medium
 * Topics: Math
 * Date Solved: 26/05/2025
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int reverse(int x) {
        int temp = x;
        x = 0;

        while (temp != 0) {
            int rem = temp % 10;

            if (x > INT_MAX / 10 || (x == INT_MAX / 10 && rem > 7))
                return 0;
            if (x < INT_MIN / 10 || (x == INT_MIN / 10 && rem < -8))
                return 0;

            x = x * 10 + rem;
            temp /= 10;
        }

        return x;
    }
};
