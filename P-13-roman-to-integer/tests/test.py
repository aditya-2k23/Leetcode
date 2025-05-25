import sys
import os
# Add the parent directory to the system path
sys.path.append(os.path.abspath(os.path.join(os.path.dirname(__file__), '..')))

from solution import Solution

def test_function(input_str, expected, test_number):
    sol = Solution()
    result = sol.romanToInt(input_str)
    print(f"Test Case {test_number}: Input: {input_str} ", end="")
    if result == expected:
        print(f"Output: {result} Expected: {expected}\tPassed")
        return True
    else:
        print(f"Failed: Expected {expected}, Got {result}")
        return False

def run_tests():
    passed = 0
    total = 0

    if test_function("III", 3, total := total + 1): passed += 1
    if test_function("IV", 4, total := total + 1): passed += 1
    if test_function("IX", 9, total := total + 1): passed += 1
    if test_function("LVIII", 58, total := total + 1): passed += 1
    if test_function("MCMXCIV", 1994, total := total + 1): passed += 1
    print(f"\nTest Results: {passed}/{total} passed.")
    print("All tests passed!" if passed == total else "Some tests failed.")

if __name__ == "__main__":
    run_tests()
