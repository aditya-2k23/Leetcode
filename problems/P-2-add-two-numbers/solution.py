"""
LeetCode Problem: 2. Add Two Numbers
Difficulty: Medium
Topics: Linked List, Math, Recursion
Date Solved: 21/06/2025
"""

from typing import Optional

class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode], carry: int = 0) -> Optional[ListNode]:
      if not l1 and not l2 and carry == 0:
        return None
      
      sum = carry
      
      if l1:
        sum += l1.val
        l1 = l1.next
      if l2:
        sum += l2.val
        l2 = l2.next
      
      carry = sum // 10
      node = ListNode(sum % 10)
      node.next = self.addTwoNumbers(l1, l2, carry)
      
      return node
