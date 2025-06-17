/*
 * LeetCode Problem: 202. Happy Number
 * Difficulty: Easy
 * Topics: Hash Table, Math, Two Pointers
 * Date Solved: 17/06/2025
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
  int sqDigits(int n) {
    int sum = 0;
    while (n > 0) {
      int rem = n % 10;
      sum += rem * rem;
      n /= 10;
    }

    return sum;
  }

public:
  // Hash Map Approach
  bool isHappy(int n) {
    if (n == 0) return true;

    unordered_map<int, bool> map;

    while (n != 1 && map.find(n) == map.end()) {
      map[n] = true;
      n = sqDigits(n);
    }

    return n == 1;
  }
};
