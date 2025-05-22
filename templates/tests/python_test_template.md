## Python Test Template

Template may be changed to fit the problem. The template is designed to be used with most of the LeetCode problems.
But, it may not be suitable for all problems. You can modify the template as per your requirements.

_(Recommended to use AI tools to modify the template)_

### Usage

```bash
cd tests
python test.py
```

```python
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

def test_function(input1, input2, expected, test_number):
    sol = Solution()
    result = sol.methodName(input1, input2)  # Replace with actual function name

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

    # Add test cases here
    # Example: if test_function([2, 7, 11, 15], 9, [0, 1], total := total + 1): passed += 1

    print(f"\nTest Results: {passed}/{total} passed.")
    print("All tests passed!" if passed == total else "Some tests failed.")

if __name__ == "__main__":
    run_tests()
```
