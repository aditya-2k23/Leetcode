import sys
import os
# Add the parent directory to the system path
sys.path.append(os.path.abspath(os.path.join(os.path.dirname(__file__), '..')))

from solution import Solution

def print_result(result):
    print("true" if result else "false", end='')

def test_function(input_str, expected, test_number):
    sol = Solution()
    result = sol.isValid(input_str)
    print(f"Test Case {test_number}: Input: \"{input_str}\"\tExpected: ", end='')
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
    if test_function("()", True, total + 1): passed += 1
    total += 1
    if test_function("()[]{}", True, total + 1): passed += 1
    total += 1
    if test_function("(]", False, total + 1): passed += 1
    total += 1
    if test_function("([])", True, total + 1): passed += 1
    total += 1
    if test_function("([)]", False, total + 1): passed += 1
    total += 1
    if test_function("{[]}", True, total + 1): passed += 1
    total += 1
    if test_function("", True, total + 1): passed += 1
    total += 1
    if test_function("([{}])", True, total + 1): passed += 1
    total += 1
    if test_function("([)]{", False, total + 1): passed += 1
    total += 1

    print(f"\nTest Results: {passed}/{total} passed.")
    if passed == total:
        print("All tests passed successfully!")
    else:
        print("Some tests failed. Please check the output for details.")

if __name__ == "__main__":
    run_tests()

