#include "../solution.cpp"
#include <bits/stdc++.h>
using namespace std;

void printResult(const vector<int>& result) {
  cout << "[";
  for (size_t i = 0; i < result.size(); ++i) {
    cout << result[i];
    if (i < result.size() - 1)
      cout << ",";
  }
  cout << "]";
}

bool testFunction(vector<int> input, int k, const vector<int>& expected, int testNumber) {
  Solution sol;
  sol.rotate(input, k);  // Note: rotate modifies the input vector in-place

  cout << "Test Case " << testNumber << ": ";
  cout << "k = " << k << " ";
  if (input == expected) {
    cout << "Expected: ";
    printResult(expected);
    cout << " Got: ";
    printResult(input);
    cout << " Passed\n";
    return true;
  }
  else {
    cout << "Failed: Expected ";
    printResult(expected);
    cout << ", Got ";
    printResult(input);
    cout << "\n";
    return false;
  }
}

void runTests() {
  int passed = 0, total = 0;

  // Test cases from the problem description
  if (testFunction({ 1,2,3,4,5,6,7 }, 3, { 5,6,7,1,2,3,4 }, ++total)) passed++;
  if (testFunction({ -1,-100,3,99 }, 2, { 3,99,-1,-100 }, ++total)) passed++;

  // Edge cases
  if (testFunction({ 1 }, 0, { 1 }, ++total)) passed++;
  if (testFunction({ 1 }, 1, { 1 }, ++total)) passed++;
  if (testFunction({ 1,2 }, 1, { 2,1 }, ++total)) passed++;
  if (testFunction({ 1,2 }, 2, { 1,2 }, ++total)) passed++;

  // k greater than array length
  if (testFunction({ 1,2,3 }, 4, { 3,1,2 }, ++total)) passed++;
  if (testFunction({ 1,2,3,4,5 }, 7, { 4,5,1,2,3 }, ++total)) passed++;

  // k equals array length (no change)
  if (testFunction({ 1,2,3,4,5 }, 5, { 1,2,3,4,5 }, ++total)) passed++;

  // Large k value
  if (testFunction({ 1,2,3,4,5,6 }, 100000, { 3,4,5,6,1,2 }, ++total)) passed++;

  // Additional test cases
  if (testFunction({ 1,2,3,4,5,6,7,8,9 }, 4, { 6,7,8,9,1,2,3,4,5 }, ++total)) passed++;
  if (testFunction({ -1,0,1,2,3 }, 3, { 1,2,3,-1,0 }, ++total)) passed++;

  cout << "\nTest Results: " << passed << "/" << total << " passed.\n";
  if (passed == total) cout << "All tests passed!\n";
  else cout << "Some tests failed.\n";
}

int main() {
  runTests();
  return 0;
}
