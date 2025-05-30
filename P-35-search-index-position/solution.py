"""
LeetCode Problem: 35. Search Insert Position
Difficulty: Easy
Topics: Array, Binary Search
Date Solved: 30/05/2025
"""

class Solution:
    def searchInsert(self, nums: list[int], target: int) -> int:
        for i in range(len(nums)):
            if nums[i] >= target:
                return i
        
        return len(nums)