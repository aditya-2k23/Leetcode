import sys
import os
# Add the parent directory to the system path
sys.path.append(os.path.abspath(os.path.join(os.path.dirname(__file__), '..')))

from solution import Solution  # Assuming the solution is in a file named solution.py

def print_result(result):
    print(result, end="")

def test_function(input1, expected, test_number):
    sol = Solution()
    result = sol.climbStairs(input1)

    print(f"Test Case {test_number}: ", end="")
    print(f"Input: {input1} ", end="")
    if result == expected:
        print("\tPassed")
        return True
    else:
        print(f"Failed: Expected ", end="")
        print_result(expected)
        print(", Got ", end="")
        print_result(result)
        print()
        return False

def run_tests():
    passed = 0
    total = 0

    test_cases = [
        (1, 1),
        (2, 2),
        (3, 3),
        (4, 5),
        (5, 8),
        (10, 89),
        (20, 10946),
        (30, 1346269),
        (45, 1836311903)
    ]

    for i, (inp, expected) in enumerate(test_cases, start=1):
        total += 1
        if test_function(inp, expected, i):
            passed += 1

    print(f"\nTest Results: {passed}/{total} passed.")
    print("All tests passed!" if passed == total else "Some tests failed.")

if __name__ == "__main__":
    run_tests()
