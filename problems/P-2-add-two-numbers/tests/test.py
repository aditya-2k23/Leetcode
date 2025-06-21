import sys
import os
# Add the parent directory to the system path
sys.path.append(os.path.abspath(os.path.join(os.path.dirname(__file__), '..')))

from solution import ListNode, Solution

def create_list(vals):
    if not vals:
        return None
    head = ListNode(vals[0])
    curr = head
    for v in vals[1:]:
        curr.next = ListNode(v)
        curr = curr.next
    return head

def to_list(node):
    res = []
    while node:
        res.append(node.val)
        node = node.next
    return res

def test_function(l1, l2, expected, test_number):
    list1 = create_list(l1)
    list2 = create_list(l2)
    result = Solution().addTwoNumbers(list1, list2)
    result_list = to_list(result)
    print(f"Test Case {test_number}: Input1: {l1} Input2: {l2} ", end="")
    if result_list == expected:
        print("Passed")
        return True
    else:
        print(f"Failed: Expected {expected}, Got {result_list}")
        return False

def run_tests():
    passed = 0
    total = 0
    if test_function([2,4,3], [5,6,4], [7,0,8], total+1): passed += 1
    total += 1
    if test_function([0], [0], [0], total+1): passed += 1
    total += 1
    if test_function([9,9,9,9,9,9,9], [9,9,9,9], [8,9,9,9,0,0,0,1], total+1): passed += 1
    total += 1
    if test_function([1,8], [0], [1,8], total+1): passed += 1
    total += 1
    if test_function([5], [5], [0,1], total+1): passed += 1
    total += 1
    if test_function([1], [9,9,9], [0,0,0,1], total+1): passed += 1
    total += 1
    if test_function([9,9,9], [1], [0,0,0,1], total+1): passed += 1
    total += 1
    if test_function([2,4,9], [5,6,4,9], [7,0,4,0,1], total+1): passed += 1
    total += 1
    if test_function([0,1], [0,1,2], [0,2,2], total+1): passed += 1
    total += 1
    if test_function([9,9], [1], [0,0,1], total+1): passed += 1
    total += 1
    if test_function([1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1], [5,6,4], [6,6,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1], total+1): passed += 1
    total += 1
    print(f"\nTest Results: {passed}/{total} passed.")
    if passed == total:
        print("All tests passed!")
    else:
        print("Some tests failed.")

if __name__ == "__main__":
    run_tests()
