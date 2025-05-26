#include "../solution.cpp"
#include <bits/stdc++.h>
using namespace std;

bool testFunction(int input, int expected, int testNumber) {
    Solution sol;
    int result = sol.reverse(input);

    cout << "Test Case " << testNumber << ": ";
    cout << "Input: " << input << "\t\t| ";
    cout << "Expected: " << expected << "\t| ";
    cout << "Got: " << result << "\t| ";

    if (result == expected) {
        cout << "\tPassed\n";
        return true;
    } else {
        cout << "\tFailed\n";
        return false;
    }
}

void runTests() {
    int passed = 0, total = 0;

    if (testFunction(123, 321, ++total))
        passed++;
    if (testFunction(-123, -321, ++total))
        passed++;
    if (testFunction(120, 21, ++total))
        passed++;
    if (testFunction(0, 0, ++total))
        passed++;
    if (testFunction(1534236469, 0, ++total))
        passed++; // overflow case
    if (testFunction(-2147483412, -2143847412, ++total))
        passed++; // valid reverse
    if (testFunction(1463847412, 2147483641, ++total))
        passed++; // just below overflow
    if (testFunction(2147483647, 0, ++total))
        passed++; // max int, overflows
    if (testFunction(-2147483648, 0, ++total))
        passed++; // min int, overflows

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
