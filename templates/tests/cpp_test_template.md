## C++ Test Template

Template may be changed to fit the problem. The template is designed to be used with most of the LeetCode problems.
But, it may not be suitable for all problems. You can modify the template as per your requirements.

_(Recommended to use AI tools to modify the template)_

### Usage

```bash
cd tests
g++ test.cpp ../solution.cpp -o test; ./test
```

```cpp
#include "../solution.cpp"
#include <bits/stdc++.h>
using namespace std;

void printResult(const vector<int> &result) {
    cout << "[";
    for (size_t i = 0; i < result.size(); ++i) {
        cout << result[i];
        if (i < result.size() - 1)
            cout << ",";
    }
    cout << "]";
}

bool testFunction(const vector<int> &input1, int input2, const vector<int> &expected, int testNumber) {
    Solution sol;
    vector<int> result = sol.methodName(input1, input2);  // Replace with actual function

    cout << "Test Case " << testNumber << ": ";
    cout << "Input1: " << input1 << " ";
    cout << "Input2: " << input2 << " ";
    if (result == expected) {
        printResult(result);
        cout << " ";
        printResult(expected);
        cout << " ";
        cout << "Passed\n"; // Add tabs (\t) if needed for better formatting
        return true;
    } else {
        cout << "Failed: Expected ";
        printResult(expected);
        cout << ", Got ";
        printResult(result);
        cout << "\n";
        return false;
    }
}

void runTests() {
    int passed = 0, total = 0;

    // Add test cases here
    // Example: if (testFunction({2, 7, 11, 15}, 9, {0, 1}, ++total)) passed++;

    cout << "\nTest Results: " << passed << "/" << total << " passed.\n";
    if (passed == total) cout << "All tests passed!\n";
    else cout << "Some tests failed.\n";
}

int main() {
    runTests();
    return 0;
}
```
