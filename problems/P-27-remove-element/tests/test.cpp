#include "../solution.cpp"
#include <bits/stdc++.h>
using namespace std;

// Helper to print a vector (for debugging)
void printVec(const vector<int>& v, int len) {
  cout << "[";
  for (int i = 0; i < len; ++i) {
    cout << v[i];
    if (i < len - 1) cout << ",";
  }
  cout << "]";
}

// Test function for removeElement
bool testFunction(vector<int> input, int val, vector<int> expected, int expectedLen, int testNumber) {
  Solution sol;
  int k = sol.removeElement(input, val);

  cout << "Test Case " << testNumber << ":\n";
  cout << "  Input:    ";
  printVec(input, input.size());
  cout << "\n  val:      " << val << "\n";

  bool passed = (k == expectedLen);
  for (int i = 0; i < expectedLen && passed; ++i)
    if (input[i] != expected[i]) passed = false;

  cout << "  Output:   ";
  printVec(input, k);
  cout << " (Length: " << k << ")\n";
  cout << "  Expected: ";
  printVec(expected, expectedLen);
  cout << " (Length: " << expectedLen << ")\n";

  if (passed) {
    cout << "  Result:   Passed\n";
  }
  else {
    cout << "  Result:   Failed\n";
  }
  cout << "----------------------------------------\n";
  return passed;
}

void runTests() {
  int passed = 0, total = 0;

  // Test cases
  if (testFunction({ 3,2,2,3 }, 3, { 2,2 }, 2, ++total)) passed++;
  if (testFunction({ 0,1,2,2,3,0,4,2 }, 2, { 0,1,3,0,4 }, 5, ++total)) passed++;
  if (testFunction({}, 1, {}, 0, ++total)) passed++;
  if (testFunction({ 1,1,1,1 }, 1, {}, 0, ++total)) passed++;
  if (testFunction({ 4,5 }, 4, { 5 }, 1, ++total)) passed++;
  if (testFunction({ 2,2,3 }, 2, { 3 }, 1, ++total)) passed++;
  if (testFunction({ 1,2,3,4,5 }, 6, { 1,2,3,4,5 }, 5, ++total)) passed++;

  cout << "\nTest Results: " << passed << "/" << total << " passed.\n";
  if (passed == total) cout << "All tests passed!\n";
  else cout << "Some tests failed.\n";
}

int main() {
  runTests();
  return 0;
}