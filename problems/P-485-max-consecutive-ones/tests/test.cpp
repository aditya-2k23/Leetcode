#include "../solution.cpp"
#include <iostream>
#include <vector>
#include <cassert>
using namespace std;

void run_test(const vector<int>& nums, int expected, int test_num) {
  Solution sol;
  vector<int> nums_copy = nums;
  int result = sol.findMaxConsecutiveOnes(nums_copy);
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
  run_test({ 1,1,0,1,1,1 }, 3, 1);
  run_test({ 1,0,1,1,0,1 }, 2, 2);
  run_test({ 0,0,0,0 }, 0, 3);
  run_test({ 1,1,1,1 }, 4, 4);
  run_test({ 1 }, 1, 5);
  run_test({ 0 }, 0, 6);
  run_test({}, 0, 7);
  run_test({ 1,0,1,0,1,0,1,1,1,0,1,1 }, 3, 8);
  cout << "All test cases passed!\n";
  return 0;
}
