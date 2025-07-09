#include "../solution.cpp"
#include <iostream>
#include <vector>
#include <cassert>
using namespace std;

void run_test(const vector<int>& nums, int expected, int test_num) {
  Solution sol;
  vector<int> nums_copy = nums;
  int result = sol.singleNumber(nums_copy);
  cout << "Test " << test_num << ": Input: [";
  for (size_t i = 0; i < nums.size(); ++i) {
    cout << nums[i];
    if (i + 1 < nums.size()) cout << ", ";
  }
  cout << "] -> Output: " << result << ", Expected: " << expected;
  if (result == expected) cout << " [PASSED]\n"; else cout << " [FAILED]\n";
  assert(result == expected);
}

int main() {
  // LeetCode examples
  run_test({ 2,2,1 }, 1, 1);
  run_test({ 4,1,2,1,2 }, 4, 2);
  run_test({ 1 }, 1, 3);
  // Additional test cases
  run_test({ 0,1,0 }, 1, 4);
  run_test({ -1,-1,2 }, 2, 5);
  run_test({ 5,7,5,4,7 }, 4, 6);
  run_test({ -2147483648, 1, 1 }, -2147483648, 7);
  run_test({ 2147483647, 1, 1 }, 2147483647, 8);
  cout << "All test cases passed!\n";
  return 0;
}
