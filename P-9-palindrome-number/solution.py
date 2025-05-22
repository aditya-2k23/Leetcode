"""
LeetCode Problem: 9. Palindrome Number
Difficulty: Easy
Topics: Math, String Manipulation
Date Solved: 23/05/2025
"""

class Solution:
    def isPalindrome(self, x: int) -> bool:
        s = str(x)
        rev = s[::-1]

        return s == rev
