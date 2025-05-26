"""
LeetCode Problem: 7. Reverse Integer
Difficulty: Medium
Topics: Math
Date Solved: 26/05/2025
"""

class Solution:
    def reverse(self, x: int) -> int:
        INT_MIN = -2**31
        INT_MAX = 2**31 - 1

        if (x < 0):
            s = str(-x)
            rev = -int(s[::-1])
        else:
            s = str(x)
            rev = int(s[::-1])

        if (rev < INT_MIN or rev > INT_MAX):
            return 0

        return rev
