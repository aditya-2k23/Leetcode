/*
 * LeetCode Problem: 9. Palindrome Number
 * Difficulty: Easy
 * Topics: Math, String Manipulation
 * Date Solved: 23/05/2025
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0)
            return false;

        int temp = x;
        int rev = 0;
        while (temp > 0) {
            int rem = temp % 10;
            rev = rev * 10 + rem;
            temp /= 10;
        }

        return rev == x;
    }
};
