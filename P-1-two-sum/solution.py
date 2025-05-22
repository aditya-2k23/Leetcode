"""
 * LeetCode Problem: 1. Two Sum
 * Difficulty: Easy
 * Topics: [Array, Hash Table]
 * Date Solved: 22-05-2025
"""

class Solution:
    def twoSum(self, nums, target):
        num_map = {}
        for i, num in enumerate(nums):
            complement = target - num
            if complement in num_map:
                return [num_map[complement], i]
            num_map[num] = i
        return []
