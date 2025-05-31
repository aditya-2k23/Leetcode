import sys
import os
# Add the parent directory to the system path
sys.path.append(os.path.abspath(os.path.join(os.path.dirname(__file__), '..')))

from solution import Solution # Assuming the solution is in a file named solution.py

def print_result(result):
    print("[", end="")
    for i, val in enumerate(result):
        print(val, end="")
        if i < len(result) - 1:
            print(",", end="")
    print("]", end="")

def test_function(input1, expected, test_number):
    sol = Solution()
    result = sol.isPalindrome(input1)

    print(f"Test Case {test_number}: ", end="")
    print("Input: ", input1, ("\t\t " if len(str(input1)) <= 7 else ""), end="")
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

    test_cases = [
        (121, True),
        (-121, False),
        (10, False),
        (12321, True),
        (0, True),
        (1234321, True),
        (1234567890987654321, True),
        (1234567890123456789, False),
    ]

    for i, (input1, expected) in enumerate(test_cases):
        if test_function(input1, expected, i + 1):
            passed += 1
        total += 1

    print(f"\nTest Results: {passed}/{total} passed.")
    print("All tests passed!" if passed == total else "Some tests failed.")

if __name__ == "__main__":
    run_tests()
