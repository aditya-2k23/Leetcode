import sys
import os
# Add the parent directory to the system path
sys.path.append(os.path.abspath(os.path.join(os.path.dirname(__file__), '..')))

from solution import Solution

def test_function(input_val, expected, test_number):
    sol = Solution()
    result = sol.reverse(input_val)

    print(f"Test Case {test_number}: Input: {input_val} | Expected: {expected} | Got: {result} | ", end="")

    if result == expected:
        print("Passed")
        return True
    else:
        print("Failed")
        return False

def run_tests():
    passed = 0
    total = 0

    test_cases = [
        (123, 321),
        (-123, -321),
        (120, 21),
        (0, 0),
        (1534236469, 0),  # Overflow
        (-2147483412, -2143847412),
        (1463847412, 2147483641),
        (2147483647, 0),  # Max int overflow
        (-2147483648, 0)  # Min int overflow
    ]

    for i, (input_val, expected) in enumerate(test_cases, 1):
        total += 1
        if test_function(input_val, expected, i):
            passed += 1

    print(f"\nTest Results: {passed}/{total} passed.")
    if passed == total:
        print("All tests passed!")
    else:
        print("Some tests failed.")

if __name__ == "__main__":
    run_tests()
