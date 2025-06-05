#include "../solution.cpp"
#include <bits/stdc++.h>
using namespace std;

void printVector(const vector<int>& v) {
  cout << "[";
  for (size_t i = 0; i < v.size(); ++i) {
    cout << v[i];
    if (i + 1 < v.size()) cout << ",";
  }
  cout << "]";
}

bool testBruteMerge(vector<int> nums1, int m, vector<int> nums2, int n, const vector<int>& expected, int testNumber) {
  Solution sol;
  vector<int> nums1_copy = nums1;
  sol.BruteMerge(nums1_copy, m, nums2, n);
  cout << "BruteMerge Test " << testNumber << ": ";
  if (nums1_copy == expected) {
    cout << "Passed ";
    printVector(nums1_copy);
    cout << endl;
    return true;
  }
  else {
    cout << "Failed. Expected ";
    printVector(expected);
    cout << ", Got ";
    printVector(nums1_copy);
    cout << endl;
    return false;
  }
}

bool testMerge(vector<int> nums1, int m, vector<int> nums2, int n, const vector<int>& expected, int testNumber) {
  Solution sol;
  vector<int> nums1_copy = nums1;
  sol.merge(nums1_copy, m, nums2, n);
  cout << "merge Test " << testNumber << ": ";
  if (nums1_copy == expected) {
    cout << "Passed ";
    printVector(nums1_copy);
    cout << endl;
    return true;
  }
  else {
    cout << "Failed. Expected ";
    printVector(expected);
    cout << ", Got ";
    printVector(nums1_copy);
    cout << endl;
    return false;
  }
}

void runTests() {
  int passed = 0, total = 0;
  // Test case 1
  vector<int> nums1a = { 1,2,3,0,0,0 };
  vector<int> nums2a = { 2,5,6 };
  vector<int> expected1 = { 1,2,2,3,5,6 };
  if (testBruteMerge(nums1a, 3, nums2a, 3, expected1, ++total)) passed++;
  if (testMerge(nums1a, 3, nums2a, 3, expected1, ++total)) passed++;
  // Test case 2
  vector<int> nums1b = { 1 };
  vector<int> nums2b = {};
  vector<int> expected2 = { 1 };
  if (testBruteMerge(nums1b, 1, nums2b, 0, expected2, ++total)) passed++;
  if (testMerge(nums1b, 1, nums2b, 0, expected2, ++total)) passed++;
  // Test case 3
  vector<int> nums1c = { 0 };
  vector<int> nums2c = { 1 };
  vector<int> expected3 = { 1 };
  if (testBruteMerge(nums1c, 0, nums2c, 1, expected3, ++total)) passed++;
  if (testMerge(nums1c, 0, nums2c, 1, expected3, ++total)) passed++;
  // Test case 4 (all zeros)
  vector<int> nums1d = { 0,0,0 };
  vector<int> nums2d = { 0,0,0 };
  vector<int> expected4 = { 0,0,0 };
  if (testBruteMerge(nums1d, 0, nums2d, 3, expected4, ++total)) passed++;
  if (testMerge(nums1d, 0, nums2d, 3, expected4, ++total)) passed++;
  // Test case 5 (negative numbers)
  vector<int> nums1e = { -1,0,0,0 };
  vector<int> nums2e = { -4,-3,-2 };
  vector<int> expected5 = { -4,-3,-2,-1 };
  if (testBruteMerge(nums1e, 1, nums2e, 3, expected5, ++total)) passed++;
  if (testMerge(nums1e, 1, nums2e, 3, expected5, ++total)) passed++;
  cout << "\nTest Results: " << passed << "/" << total << " passed.\n";
  if (passed == total) cout << "All tests passed!\n";
  else cout << "Some tests failed.\n";
}

int main() {
  runTests();
  return 0;
}
