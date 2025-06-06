#include "../solution.cpp"
#include <bits/stdc++.h>
using namespace std;

// Helper to print int result
void printResult(const int& result) {
  cout << result;
}

// Test function for Solution::search
bool testFunction(const vector<int>& input1, int input2, int expected, int testNumber) {
  Solution sol;
  int result = sol.search(const_cast<vector<int>&>(input1), input2);

  cout << "Test Case " << testNumber << ": ";
  cout << "Input1: [";
  for (size_t i = 0; i < input1.size(); ++i) {
    cout << input1[i];
    if (i < input1.size() - 1) cout << ",";
  }
  cout << "] ";
  cout << "Input2: " << input2 << " ";
  if (result == expected) {
    cout << "\tOutput: ";
    printResult(result);
    cout << "\t";
    cout << "Expected: ";
    printResult(expected);
    cout << " Passed\n";
    return true;
  }
  else {
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

  // Test cases for LeetCode 704
  if (testFunction({ -1,0,3,5,9,12 }, 9, 4, ++total)) passed++;
  if (testFunction({ -1,0,3,5,9,12 }, 2, -1, ++total)) passed++;
  if (testFunction({ 5 }, 5, 0, ++total)) passed++;
  if (testFunction({ 2,4,6,8,10 }, 8, 3, ++total)) passed++;
  if (testFunction({ 2,4,6,8,10 }, 1, -1, ++total)) passed++;

  cout << "\nTest Results: " << passed << "/" << total << " passed.\n";
  if (passed == total) cout << "All tests passed!\n";
  else cout << "Some tests failed.\n";
}

int main() {
  runTests();
  return 0;
}
