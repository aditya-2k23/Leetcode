// File: tests/test.cpp
#include "../solution.cpp"
#include <iostream>
using namespace std;

bool testFunction(int input, int expected, int testNumber) {
  Solution sol;
  int result = sol.mySqrt(input);

  cout << "Test Case " << testNumber << ": ";
  cout << "Input = " << input;
  cout << ", Output = " << result;
  cout << ", Expected = " << expected;

  if (result == expected) {
    cout << "\tPassed" << endl;
    return true;
  }
  else {
    cout << "\tFailed" << endl;
    return false;
  }
}

void runTests() {
  int passed = 0, total = 0;

  if (testFunction(4, 2, ++total)) passed++;
  if (testFunction(8, 2, ++total)) passed++;
  if (testFunction(0, 0, ++total)) passed++;
  if (testFunction(1, 1, ++total)) passed++;
  if (testFunction(2147395600, 46340, ++total)) passed++;
  if (testFunction(2147483647, 46340, ++total)) passed++;
  if (testFunction(16, 4, ++total)) passed++;
  if (testFunction(25, 5, ++total)) passed++;
  if (testFunction(36, 6, ++total)) passed++;
  if (testFunction(363, 19, ++total)) passed++;
  if (testFunction(9312, 96, ++total)) passed++;
  if (testFunction(2147395600, 46340, ++total)) passed++;

  cout << "\nTest Results: " << passed << "/" << total << " passed." << endl;
  if (passed == total) cout << "All tests passed!" << endl;
  else cout << "Some tests failed." << endl;
}

int main() {
  runTests();
  return 0;
}
