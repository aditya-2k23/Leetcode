#include "../solution.cpp"
#include <bits/stdc++.h>
using namespace std;

// Pretty-print vector
void printVector(const vector<int>& nums, int k) {
  cout << "[";
  for (int i = 0; i < k; ++i) {
    cout << nums[i];
    if (i < k - 1) cout << ", ";
  }
  cout << "]";
}

// Run a single test case
bool runTest(int testNum, vector<int> input, const vector<int>& expectedNums, int expectedK) {
  Solution sol;
  int k = sol.removeDuplicates(input);

  bool pass = (k == expectedK) && equal(input.begin(), input.begin() + k, expectedNums.begin());

  cout << "Test Case #" << setw(2) << testNum << " | ";
  cout << (pass ? "[PASS]" : "[FAIL]") << " | ";
  cout << "Expected k: " << expectedK << ", nums: ";
  printVector(expectedNums, expectedK);
  cout << " | Got k: " << k << ", nums: ";
  printVector(input, k);
  cout << "\n";

  return pass;
}

// Run all tests
void runAllTests() {
  cout << "========== Running Test Suite ==========\n";
  int passed = 0, total = 0;

  vector<tuple<vector<int>, vector<int>, int>> testCases = {
      make_tuple(vector<int>{1, 1, 2}, vector<int>{1, 2}, 2),
      make_tuple(vector<int>{0,0,1,1,1,2,2,3,3,4}, vector<int>{0,1,2,3,4}, 5),
      make_tuple(vector<int>{}, vector<int>{}, 0),
      make_tuple(vector<int>{1,1,1,1}, vector<int>{1}, 1),
      make_tuple(vector<int>{1,2,3,4,5}, vector<int>{1,2,3,4,5}, 5),
      make_tuple(vector<int>{2,2,2,3,3}, vector<int>{2,3}, 2),
      make_tuple(vector<int>{1}, vector<int>{1}, 1),
      make_tuple(vector<int>{1,1,1,2,2,3}, vector<int>{1,2,3}, 3),
      make_tuple(vector<int>{1,1,2,2,2,3,4,4,4,5}, vector<int>{1,2,3,4,5}, 5),
      make_tuple(vector<int>{-1,-1,0,0,1,1,2}, vector<int>{-1,0,1,2}, 4),
      make_tuple(vector<int>{INT_MIN,INT_MIN,0,INT_MAX,INT_MAX}, vector<int>{INT_MIN,0,INT_MAX}, 3)
  };

  for (size_t i = 0; i < testCases.size(); ++i) {
    vector<int> input;
    vector<int> expectedNums;
    int expectedK;
    tie(input, expectedNums, expectedK) = testCases[i];

    total++;
    if (runTest(total, input, expectedNums, expectedK)) passed++;
  }

  cout << "\n========== Summary ==========\n";
  cout << "Passed: " << passed << "/" << total << "\n";
  if (passed == total) cout << "[OK] All test cases passed successfully!\n";
  else cout << "[!!] Some test cases failed.\n";
}

int main() {
  runAllTests();
  return 0;
}