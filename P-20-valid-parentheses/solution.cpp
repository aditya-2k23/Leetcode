/*
 * LeetCode Problem: 20. Valid Parentheses
 * Difficulty: Easy
 * Topics: String, Stack
 * Date Solved: 28/05/2025
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  bool isValid(string s) {
    stack<int> st;
    unordered_map<int, int> map;

    for (char c : s) {
      if (map.count(c)) {
        if (st.empty() || st.top() != map[c])
          return false;
        st.pop();
      }
      else
        st.push(c);
    }

    return st.empty();
  }
};
