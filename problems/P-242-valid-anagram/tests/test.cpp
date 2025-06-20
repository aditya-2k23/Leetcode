#include "../solution.cpp"
#include <bits/stdc++.h>
using namespace std;

bool testFunction(const string& s, const string& t, bool expected, int testNumber) {
  Solution sol;
  bool result = sol.isAnagram(s, t);
  cout << "Test Case " << testNumber << ": ";
  cout << "Input: s=\"" << s << "\", t=\"" << t << "\" ";
  if (result == expected) {
    cout << "Passed\n";
    return true;
  }
  else {
    cout << "Failed: Expected " << (expected ? "true" : "false") << ", Got " << (result ? "true" : "false") << "\n";
    return false;
  }
}

void runTests() {
  int passed = 0, total = 0;
  if (testFunction("anagram", "nagaram", true, ++total)) passed++;
  if (testFunction("rat", "car", false, ++total)) passed++;
  if (testFunction("", "", true, ++total)) passed++;
  if (testFunction("a", "a", true, ++total)) passed++;
  if (testFunction("a", "b", false, ++total)) passed++;
  if (testFunction("ab", "ba", true, ++total)) passed++;
  if (testFunction("abc", "cba", true, ++total)) passed++;
  if (testFunction("abc", "ab", false, ++total)) passed++;
  cout << "\nTest Results: " << passed << "/" << total << " passed.\n";
  if (passed == total) cout << "All tests passed!\n";
  else cout << "Some tests failed.\n";
}

int main() {
  runTests();
  return 0;
}
