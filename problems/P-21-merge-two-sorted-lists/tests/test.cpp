#include "../solution.cpp"
#include <bits/stdc++.h>
using namespace std;

vector<int> toVector(ListNode* head) {
  vector<int> result;
  while (head) {
    result.push_back(head->val);
    head = head->next;
  }
  return result;
}

ListNode* fromVector(const vector<int>& vals) {
  ListNode dummy(0);
  ListNode* curr = &dummy;
  for (int v : vals) {
    curr->next = new ListNode(v);
    curr = curr->next;
  }
  return dummy.next;
}

void printResult(const vector<int>& result) {
  cout << "[";
  for (size_t i = 0; i < result.size(); ++i) {
    cout << result[i];
    if (i < result.size() - 1) cout << ",";
  }
  cout << "]";
}

bool testFunction(const vector<int>& input1, const vector<int>& input2, const vector<int>& expected, int testNumber) {
  Solution sol;
  ListNode* l1 = fromVector(input1);
  ListNode* l2 = fromVector(input2);

  ListNode* merged = sol.iterativeMerge(l1, l2);
  // ListNode* merged = sol.recursiveMerge(l1, l2);
  // ListNode* merged = sol.bruteForceMerge(l1, l2);

  vector<int> result = toVector(merged);
  cout << "Test Case " << testNumber << ": ";
  cout << "Input1: "; printResult(input1); cout << " ";
  cout << "Input2: "; printResult(input2); cout << " ";
  if (input1.size() < 2 && input2.size() < 2) cout << "\t";
  cout << "\tExpected: "; printResult(expected); cout << " Got: "; printResult(result);
  if (result == expected) {
    if (input1.size() < 2 && input2.size() < 2) cout << "\t\t\t";
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

  if (testFunction({ 1,2,4 }, { 1,3,4 }, { 1,1,2,3,4,4 }, ++total)) passed++;
  if (testFunction({}, {}, {}, ++total)) passed++;
  if (testFunction({}, { 0 }, { 0 }, ++total)) passed++;
  if (testFunction({ 2,5,7 }, { 1,3,6,8 }, { 1,2,3,5,6,7,8 }, ++total)) passed++;
  if (testFunction({ -3,0,2 }, { -2,1,3 }, { -3,-2,0,1,2,3 }, ++total)) passed++;

  cout << "\nTest Results: " << passed << "/" << total << " passed.\n";

  if (passed == total) cout << "All tests passed successfully!\n";
  else cout << "Some tests failed. Please check the output for details.\n";
}

int main() {
  runTests();
  return 0;
}
