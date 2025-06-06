#include "../solution.cpp"
#include <bits/stdc++.h>
using namespace std;

// Helper to print char result
void printResult(const char& result) {
  cout << "'" << result << "'";
}

// Helper to print vector<char>
void printVector(const vector<char>& vec) {
  cout << "[";
  for (size_t i = 0; i < vec.size(); ++i) {
    cout << "'" << vec[i] << "'";
    if (i < vec.size() - 1) cout << ",";
  }
  cout << "]";
}

// Test function for Solution::nextGreatestLetter
bool testFunction(const vector<char>& input1, char input2, char expected, int testNumber) {
  Solution sol;
  vector<char> letters = input1;
  char result = sol.nextGreatestLetter(letters, input2);

  cout << "Test Case " << testNumber << ": ";
  cout << "Input1: ";
  printVector(input1);
  cout << " Input2: '" << input2 << "' ";
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

  // Test cases for LeetCode 744
  if (testFunction({ 'c','f','j' }, 'a', 'c', ++total)) passed++;
  if (testFunction({ 'c','f','j' }, 'c', 'f', ++total)) passed++;
  if (testFunction({ 'c','f','j' }, 'd', 'f', ++total)) passed++;
  if (testFunction({ 'c','f','j' }, 'g', 'j', ++total)) passed++;
  if (testFunction({ 'c','f','j' }, 'j', 'c', ++total)) passed++;
  if (testFunction({ 'c','f','j' }, 'k', 'c', ++total)) passed++;
  if (testFunction({ 'a','b' }, 'z', 'a', ++total)) passed++;
  if (testFunction({ 'a','b' }, 'a', 'b', ++total)) passed++;
  if (testFunction({ 'a','b' }, 'b', 'a', ++total)) passed++;

  cout << "\nTest Results: " << passed << "/" << total << " passed.\n";
  if (passed == total) cout << "All tests passed!\n";
  else cout << "Some tests failed.\n";
}

int main() {
  runTests();
  return 0;
}
