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

bool testFunction(int input, bool expected, int testNumber) {
    Solution sol;
    bool result = sol.isPalindrome(input);

    cout << "Test Case " << testNumber << ": ";
    cout << "Input: " << input << " ";
    if (result == expected) {
        cout << (to_string(input).length() > 2 ? "\t" : "\t\t") << " Passed\n";
        return true;
    } else {
        cout << "Failed: Expected " << (expected ? "true" : "false")
             << ", Got " << (result ? "true" : "false") << "\n";
        return false;
    }
}

void runTests() {
    int passed = 0, total = 0;

    if (testFunction(121, true, ++total))
        passed++;
    if (testFunction(-121, false, ++total))
        passed++;
    if (testFunction(10, false, ++total))
        passed++;
    if (testFunction(12321, true, ++total))
        passed++;
    if (testFunction(0, true, ++total))
        passed++;
    if (testFunction(1234321, true, ++total))
        passed++;
    if (testFunction(2147483647, false, ++total))
        passed++;

    cout << "\nTest Results: " << passed << "/" << total << " passed.\n";
    if (passed == total)
        cout << "All tests passed!\n";
    else
        cout << "Some tests failed.\n";
}

int main() {
    runTests();
    return 0;
}
