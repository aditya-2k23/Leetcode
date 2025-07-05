#include "../solution1.cpp"
#include "../solution2.cpp"
#include <iostream>
#include <vector>
#include <cassert>
using namespace std;

void test_case(const vector<int>& nums, int expected, int test_num) {
  vector<int> nums1 = nums;
  vector<int> nums2 = nums;

  Solution1 sol1;
  Solution2 sol2;

  int result1 = sol1.missingNumber(nums1);
  int result2 = sol2.missingNumber(nums2);

  cout << "Test " << test_num << ": Input: [";
  for (size_t i = 0; i < nums.size(); ++i) {
    cout << nums[i];
    if (i + 1 < nums.size()) cout << ", ";
  }
  cout << "]\n";

  cout << "  solution1.cpp Output: " << result1 << ", Expected: " << expected;
  if (result1 == expected) cout << " [PASSED]\n"; else cout << " [FAILED]\n";
  assert(result1 == expected);

  cout << "  solution2.cpp Output: " << result2 << ", Expected: " << expected;
  if (result2 == expected) cout << " [PASSED]\n"; else cout << " [FAILED]\n";
  assert(result2 == expected);
}

int main() {
  // LeetCode examples
  test_case({ 3,0,1 }, 2, 1);
  test_case({ 0,1 }, 2, 2);
  test_case({ 9,6,4,2,3,5,7,0,1 }, 8, 3);
  // Additional cases
  test_case({ 0 }, 1, 4);
  test_case({ 1 }, 0, 5);
  test_case({ 0,2 }, 1, 6);
  test_case({ 1,2 }, 0, 7);
  test_case({ 2,1 }, 0, 8);
  test_case({ 0,1,2,3,4,5,6,7,8,10 }, 9, 9);
  cout << "All test cases passed!\n";
  return 0;
}
