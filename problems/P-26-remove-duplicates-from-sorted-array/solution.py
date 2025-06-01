"""
LeetCode Problem: 26. Remove Duplicates from Sorted Array
Difficulty: Easy
Topics: Array, Two Pointers
Date Solved: 01/06/2025
"""

from typing import List

class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        """
        Two-pointer approach to remove duplicates from a sorted array.
        This method modifies the input list in place and returns the new length.
        """
        if not nums:
            return 0

        i = 0
        for j in range(1, len(nums)):
            if nums[i] != nums[j]:
                i += 1
                nums[i] = nums[j]
        
        return i + 1
    
    def removeDuplicatesBrute(self, nums: List[int]) -> int:
        """
        Brute force solution to remove duplicates from a sorted array.
        This method uses a set to track unique elements and then modifies the input list in place.
        """
        unique = []
        for i in nums:
            if i not in unique:
                unique.append(i)
        
        for i in range(len(unique)):
            nums[i] = unique[i]
        
        return len(unique)
