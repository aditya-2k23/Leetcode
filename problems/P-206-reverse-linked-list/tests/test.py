import sys
import os
# Add the parent directory to the system path
sys.path.append(os.path.abspath(os.path.join(os.path.dirname(__file__), '..')))

from solution import Solution, ListNode

# Helper to create a linked list from list

def create_list(vals):
    head = None
    tail = None
    for v in vals:
        node = ListNode(v)
        if not head:
            head = node
            tail = node
        else:
            tail.next = node
            tail = node
    return head

# Helper to convert linked list to list
def list_to_list(head):
    vals = []
    while head:
        vals.append(head.val)
        head = head.next
    return vals

# Test function for Solution.reverseList
def test_function(input_list, expected, test_number):
    sol = Solution()
    head = create_list(input_list)
    reversed_head = sol.reverseList(head)
    result = list_to_list(reversed_head)
    print(f"Test Case {test_number}: Input: {input_list}\tOutput:", end='')
    if result == expected:
        print(f"{result}\tExpected: {expected}\tPassed")
        return True
    else:
        print(f"Failed: Expected {expected}, Got {result}")
        return False

def run_tests():
    passed = 0
    total = 0
    # Example 1
    if test_function([1,2,3,4,5], [5,4,3,2,1], total+1): passed += 1
    total += 1
    # Example 2
    if test_function([1,2], [2,1], total+1): passed += 1
    total += 1
    # Example 3 (empty list)
    if test_function([], [], total+1): passed += 1
    total += 1
    # Single node
    if test_function([42], [42], total+1): passed += 1
    total += 1
    # Two nodes
    if test_function([-1,0], [0,-1], total+1): passed += 1
    total += 1
    # Negative values
    if test_function([-3,-2,-1], [-1,-2,-3], total+1): passed += 1
    total += 1
    # Mixed values
    if test_function([5,-1,3,2], [2,3,-1,5], total+1): passed += 1
    total += 1
    # Large list
    if test_function([1,2,3,4,5,6,7,8,9,10], [10,9,8,7,6,5,4,3,2,1], total+1): passed += 1
    total += 1
    print(f"\nTest Results: {passed}/{total} passed.")
    if passed == total:
        print("All tests passed!")
    else:
        print("Some tests failed.")

if __name__ == "__main__":
    run_tests()
