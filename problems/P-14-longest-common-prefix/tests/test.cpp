#include "../solution.cpp"
#include <bits/stdc++.h>
using namespace std;

void printResult(const string &result) {
    cout << '"' << result << '"';
}

bool testFunction(const vector<string> &input, const string &expected, int testNumber) {
    Solution sol;
    string result = sol.longestCommonPrefix(const_cast<vector<string> &>(input));

    cout << "Test Case " << testNumber << ": ";
    cout << "Input: [";
    for (size_t i = 0; i < input.size(); ++i) {
        cout << '"' << input[i] << '"';
        if (i < input.size() - 1)
            cout << ", ";
    }
    cout << "] ";
    cout << "Expected: ";
    printResult(expected);
    cout << ", Got: ";
    printResult(result);
    if (result == expected) {
        cout << " Passed\n";
        return true;
    } else {
        cout << " Failed\n";
        return false;
    }
}

void runTests() {
    int passed = 0, total = 0;

    // Test cases for Longest Common Prefix
    if (testFunction({"flower", "flow", "flight"}, "fl", ++total))
        passed++;
    if (testFunction({"dog", "racecar", "car"}, "", ++total))
        passed++;
    if (testFunction({"interspecies", "interstellar", "interstate"}, "inters", ++total))
        passed++;
    if (testFunction({"throne", "throne"}, "throne", ++total))
        passed++;
    if (testFunction({"a"}, "a", ++total))
        passed++;
    if (testFunction({"", "b"}, "", ++total))
        passed++;
    if (testFunction({}, "", ++total))
        passed++;
    if (testFunction({"prefix", "prefixes", "prefixation"}, "prefix", ++total))
        passed++;
    if (testFunction({"abc", "abcd", "ab"}, "ab", ++total))
        passed++;
    if (testFunction({"same", "same", "same"}, "same", ++total))
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
