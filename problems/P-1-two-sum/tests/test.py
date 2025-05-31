import sys
import os
# Add the parent directory to the system path
sys.path.append(os.path.abspath(os.path.join(os.path.dirname(__file__), '..')))

from solution import Solution

def print_result(result):
    print("[", end="")
    for i, val in enumerate(result):
        print(val, end="")
        if i < len(result) - 1:
            print(",", end="")
    print("]", end="")

def test_function(input1, input2, expected, test_number):
    sol = Solution()
    result = sol.twoSum(input1, input2)  # Match the function name from solution.py

    print(f"Test Case {test_number}: ", end="")
    if result == expected:
        print("Passed")
        return True
    else:
        print("Failed: Expected ", end="")
        print_result(expected)
        print(", Got ", end="")
        print_result(result)
        print()
        return False

def run_tests():
    passed = 0
    total = 0

    if test_function([2, 7, 11, 15], 9, [0, 1], total := total + 1): passed += 1
    if test_function([3, 2, 4], 6, [1, 2], total := total + 1): passed += 1
    if test_function([3, 3], 6, [0, 1], total := total + 1): passed += 1

    print(f"\nTest Results: {passed}/{total} passed.")
    print("All tests passed!" if passed == total else "Some tests failed.")

if __name__ == "__main__":
    run_tests()
