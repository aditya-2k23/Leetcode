#include "../solution.cpp"
#include <bits/stdc++.h>
using namespace std;

void printResult(int result) {
  cout << result;
}

bool testFunction(const vector<int>& input1, int input2, int expected, int testNumber) {
  Solution sol;
  vector<int> nums = input1;
  int result = sol.searchInsert(nums, input2);

  cout << "Test Case " << testNumber << ": ";
  cout << "nums: [";
  for (size_t i = 0; i < input1.size(); ++i) {
    cout << input1[i];
    if (i < input1.size() - 1) cout << ",";
  }
  cout << "] ";
  cout << "target: " << input2 << " ";
  cout << "\tExpected: ";
  printResult(expected);
  cout << "\tGot: ";
  printResult(result);
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
  if (testFunction({ 1,3,5,6 }, 5, 2, ++total)) passed++;
  if (testFunction({ 1,3,5,6 }, 2, 1, ++total)) passed++;
  if (testFunction({ 1,3,5,6 }, 7, 4, ++total)) passed++;
  if (testFunction({ 1,3,5,6 }, 0, 0, ++total)) passed++;
  if (testFunction({}, 3, 0, ++total)) passed++;
  cout << "\nTest Results: " << passed << "/" << total << " passed.\n";
  if (passed == total) cout << "All tests passed successfully!\n";
  else cout << "Some tests failed. Please check the output for details.\n";
}

int main() {
  runTests();
  return 0;
}
