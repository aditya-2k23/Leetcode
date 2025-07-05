"""
LeetCode Problem: [Problem Number]. [Problem Title]
Difficulty: [Easy/Medium/Hard]
Topics: Array, Hash Table, Bit Manipulation, Math, Sorting, Binary Search
Date Solved: 05/07/2025
"""

from typing import List

class Solution:
    def missingNumber(self, nums: List[int]) -> int:
        n = len(nums)
        sum = (n * (n + 1)) // 2
        
        s2 = 0
        for i in nums:
            s2 += i
        
        return sum - s2
    