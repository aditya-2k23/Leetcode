"""
LeetCode Problem: 13. Roman to Integer
Difficulty: Easy
Topics: Hash Table, Math, String
Date Solved: 25/05/2025
"""

class Solution:
    def romanToInt(self, s: str) -> int:
        roman = { # Dictionary to Map over the values
            "I": 1,
            "V": 5,
            "X": 10,
            "L": 50,
            "C": 100,
            "D": 500,
            "M": 1000
        }

        num = 0

        for i in range(len(s) - 1):
            if (roman[s[i]] < roman[s[i + 1]]):
                num -= roman[s[i]]
            else:
                num += roman[s[i]]

        return num + roman[s[-1]]
