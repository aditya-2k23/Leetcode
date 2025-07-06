#include "../solution.cpp"
#include <iostream>
#include <vector>
#include <cassert>
using namespace std;

void print_vec(const vector<int>& v) {
  cout << "[";
  for (size_t i = 0; i < v.size(); ++i) {
    cout << v[i];
    if (i + 1 < v.size()) cout << ", ";
  }
  cout << "]";
}

void run_test(const vector<int>& input, const vector<int>& expected, int test_num) {
  Solution sol;
  vector<int> nums = input;
  sol.sortColors(nums);
  cout << "Test " << test_num << ": Input: ";
  print_vec(input);
  cout << " -> Output: ";
  print_vec(nums);
  cout << ", Expected: ";
  print_vec(expected);
  if (nums == expected) cout << " [PASSED]\n"; else cout << " [FAILED]\n";
  assert(nums == expected);
}

int main() {
  run_test({ 2,0,2,1,1,0 }, { 0,0,1,1,2,2 }, 1);
  run_test({ 2,0,1 }, { 0,1,2 }, 2);
  run_test({ 0 }, { 0 }, 3);
  run_test({ 1 }, { 1 }, 4);
  run_test({ 2 }, { 2 }, 5);
  run_test({ 0,1,2,0,1,2 }, { 0,0,1,1,2,2 }, 6);
  run_test({ 1,2,0,2,1,0,1,2,0 }, { 0,0,0,1,1,1,2,2,2 }, 7);
  run_test({}, {}, 8);
  cout << "All test cases passed!\n";
  return 0;
}
