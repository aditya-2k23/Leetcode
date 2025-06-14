#include "../solution.cpp"
#include <bits/stdc++.h>
using namespace std;

bool testFunction(const string& input, int expected, int testNumber) {
  Solution sol;
  int result = sol.myAtoi(input);

  cout << "Test Case " << testNumber << ": ";
  cout << "Input: '" << input << "' ";
  cout << "\tExpected: " << expected << " ";
  cout << "\tGot: " << result << " ";
  if (result == expected) {
    cout << "\tPassed\n";
    return true;
  }
  else {
    cout << "\tFailed\n";
    return false;
  }
}

void runTests() {
  int passed = 0, total = 0;

  // Add test cases here
  if (testFunction("42", 42, ++total)) passed++;
  if (testFunction("   -42", -42, ++total)) passed++;
  if (testFunction("4193 with words", 4193, ++total)) passed++;
  if (testFunction("words and 987", 0, ++total)) passed++;
  if (testFunction("-91283472332", INT_MIN, ++total)) passed++; // INT_MIN
  if (testFunction("91283472332", INT_MAX, ++total)) passed++; // INT_MAX
  if (testFunction("+1", 1, ++total)) passed++;
  if (testFunction("  0000000000012345678  ", 12345678, ++total)) passed++;
  if (testFunction("-000000000000001", -1, ++total)) passed++;

  cout << "\nTest Results: " << passed << "/" << total << " passed.\n";
  if (passed == total) cout << "All tests passed!\n";
  else cout << "Some tests failed.\n";
}

int main() {
  runTests();
  return 0;
}
