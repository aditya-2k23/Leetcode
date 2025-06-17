#include "../solution.cpp"
#include <bits/stdc++.h>
using namespace std;

bool testFunction(int input, bool expected, int testNumber) {
  Solution sol;
  bool result = sol.isHappy(input);

  cout << "Test Case " << testNumber << ": ";
  cout << "Input: " << input << " | ";
  cout << "Expected: " << (expected ? "true" : "false") << " | ";
  cout << "Got: " << (result ? "true" : "false") << " | ";

  if (result == expected) {
    cout << "Passed\n";
    return true;
  }
  else {
    cout << "Failed\n";
    return false;
  }
}

void runTests() {
  int passed = 0, total = 0;

  if (testFunction(1, true, ++total)) passed++;
  if (testFunction(19, true, ++total)) passed++;
  if (testFunction(2, false, ++total)) passed++;
  if (testFunction(7, true, ++total)) passed++;
  if (testFunction(20, false, ++total)) passed++;
  if (testFunction(100, true, ++total)) passed++;

  cout << "\nTest Results: " << passed << "/" << total << " passed.\n";
  if (passed == total) cout << "All tests passed!\n";
  else cout << "Some tests failed.\n";
}

int main() {
  runTests();
  return 0;
}
