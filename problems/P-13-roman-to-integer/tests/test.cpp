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

bool testFunction(const string &input, int expected, int testNumber) {
    Solution sol;
    int result = sol.romanToInt(input);

    cout << "Test Case " << testNumber << ": ";
    cout << "Input: " << input << " ";
    if (result == expected) {
        cout << "Output: " << result << " Expected: " << expected << "\tPassed\n";
        return true;
    } else {
        cout << "Failed: Expected " << expected << ", Got " << result << "\n";
        return false;
    }
}

void runTests() {
    int passed = 0, total = 0;

    if (testFunction("III", 3, ++total))
        passed++;
    if (testFunction("IV", 4, ++total))
        passed++;
    if (testFunction("IX", 9, ++total))
        passed++;
    if (testFunction("LVIII", 58, ++total))
        passed++;
    if (testFunction("MCMXCIV", 1994, ++total))
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
