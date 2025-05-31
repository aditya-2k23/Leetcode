#include <bits/stdc++.h>
using namespace std;

void printResult(bool result) {
  cout << (result ? "true" : "false");
}

bool testFunction(const string& input, bool expected, int testNumber) {
  class Solution {
  public:
    bool isValid(string s) {
      stack<char> st;
      unordered_map<char, char> map = { {')', '('}, {']', '['}, {'}', '{'} };

      for (char c : s) {
        if (map.count(c)) {
          if (st.empty() || st.top() != map[c])
            return false;
          st.pop();
        }
        else {
          st.push(c);
        }
      }

      return st.empty();
    }
  };

  Solution sol;
  bool result = sol.isValid(input);

  cout << "Test Case " << testNumber << ": ";
  cout << "Input: \"" << input << "\" ";
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

  if (testFunction("()", true, ++total)) passed++;
  if (testFunction("()[]{}", true, ++total)) passed++;
  if (testFunction("(]", false, ++total)) passed++;
  if (testFunction("([])", true, ++total)) passed++;
  if (testFunction("([)]", false, ++total)) passed++;
  if (testFunction("{[]}", true, ++total)) passed++;
  if (testFunction("((()))", true, ++total)) passed++;
  if (testFunction("", true, ++total)) passed++;
  if (testFunction("([{}])", true, ++total)) passed++;
  if (testFunction("([)]{", false, ++total)) passed++;

  cout << "\nTest Results: " << passed << "/" << total << " passed.\n";
  if (passed == total) {
    cout << "All tests passed successfully!\n";
  }
  else {
    cout << "Some tests failed. Please check the output for details.\n";
  }
}

int main() {
  runTests();
  return 0;
}