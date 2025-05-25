/*
 * LeetCode Problem: 14. Longest Common Prefix
 * Difficulty: Easy
 * Topics: String, Trie
 * Date Solved: 25/05/2025
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string> &strs) {
        if (strs.size() == 0)
            return "";

        sort(strs.begin(), strs.end());
        string first = strs.front();
        string last = strs.back();

        int i = 0;
        while (i <= first.length() && i <= last.length() && first[i] == last[i])
            i++;

        return first.substr(0, i);
    }
};
