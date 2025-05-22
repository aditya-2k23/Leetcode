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

bool testTwoSum(const vector<int> &nums, int target, const vector<int> &expected, int testNumber) {
    Solution sol;
    vector<int> result = sol.twoSum(nums, target);

    cout << "Test Case " << testNumber << ":\n";
    if (result == expected) {
        cout << "Output: ";
        printResult(result);
        cout << " ";
        cout << "Expected: ";
        printResult(expected);
        cout << " ";
        cout << "\nPassed\n\n";
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
    int passedTests = 0;
    int totalTests = 0;

    // Test Case 1: nums = [2,7,11,15], target = 9
    if (testTwoSum({2, 7, 11, 15}, 9, {0, 1}, ++totalTests))
        passedTests++;

    // Test Case 2: nums = [3,2,4], target = 6
    if (testTwoSum({3, 2, 4}, 6, {1, 2}, ++totalTests))
        passedTests++;

    // Test Case 3: nums = [3,3], target = 6
    if (testTwoSum({3, 3}, 6, {0, 1}, ++totalTests))
        passedTests++;

    // Summary
    cout << "Test Results: " << passedTests << " out of " << totalTests << " tests passed.\n";
    if (passedTests == totalTests)
        cout << "All tests passed!\n";
    else
        cout << "Some tests failed.\n";
}

int main() {
    runTests();
    return 0;
}
