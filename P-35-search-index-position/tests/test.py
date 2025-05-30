import sys
import os
# Add the parent directory to the system path
sys.path.append(os.path.abspath(os.path.join(os.path.dirname(__file__), '..')))

from solution import Solution # Assuming the solution is in a file named solution.py

def print_result(result):
    print(result, end='')

def test_function(input1, input2, expected, test_number):
    sol = Solution()
    result = sol.searchInsert(input1, input2)
    print(f"Test Case {test_number}: nums: {input1}, target: {input2}\tExpected: ", end='')
    print_result(expected)
    print("\tGot: ", end='')
    print_result(result)
    if result == expected:
        print("\tPassed")
        return True
    else:
        print("\tFailed")
        return False

def run_tests():
    passed = 0
    total = 0
    if test_function([1,3,5,6], 5, 2, total + 1): passed += 1
    total += 1
    if test_function([1,3,5,6], 2, 1, total + 1): passed += 1
    total += 1
    if test_function([1,3,5,6], 7, 4, total + 1): passed += 1
    total += 1
    if test_function([1,3,5,6], 0, 0, total + 1): passed += 1
    total += 1
    if test_function([], 3, 0, total + 1): passed += 1
    total += 1
    print(f"\nTest Results: {passed}/{total} passed.")
    if passed == total:
        print("All tests passed successfully!")
    else:
        print("Some tests failed. Please check the output for details.")

if __name__ == "__main__":
    run_tests()
