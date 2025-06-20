/*
 * LeetCode Problem: [242]. Valid Anagram
 * Difficulty: Easy
 * Topics: Hash Table, String, Sorting
 * Date Solved: 20/06/2025
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size())
            return false;

        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        return s == t;
    }
};
