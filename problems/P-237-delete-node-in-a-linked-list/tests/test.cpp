#include "../solution.cpp"
#include <iostream>
#include <vector>
#include <cassert>
using namespace std;

ListNode* buildList(const vector<int>& vals) {
  if (vals.empty()) return nullptr;
  ListNode* head = new ListNode(vals[0]);
  ListNode* curr = head;
  for (size_t i = 1; i < vals.size(); ++i) {
    curr->next = new ListNode(vals[i]);
    curr = curr->next;
  }
  return head;
}

ListNode* findNode(ListNode* head, int val) {
  while (head && head->val != val) head = head->next;
  return head;
}

vector<int> toVector(ListNode* head) {
  vector<int> res;
  while (head) {
    res.push_back(head->val);
    head = head->next;
  }
  return res;
}

void run_test(const vector<int>& input, int nodeVal, const vector<int>& expected, int test_num) {
  ListNode* head = buildList(input);
  ListNode* node = findNode(head, nodeVal);
  Solution sol;
  if (!node || !node->next) {
    cout << "Test " << test_num << ": Invalid node to delete. [SKIPPED]\n";
    return;
  }
  sol.deleteNode(node);
  vector<int> result = toVector(head);
  cout << "Test " << test_num << ": After deleting " << nodeVal << ", Output: [";
  for (size_t i = 0; i < result.size(); ++i) {
    cout << result[i];
    if (i + 1 < result.size()) cout << ", ";
  }
  cout << "], Expected: [";
  for (size_t i = 0; i < expected.size(); ++i) {
    cout << expected[i];
    if (i + 1 < expected.size()) cout << ", ";
  }
  cout << "]";
  if (result == expected) cout << " [PASSED]\n"; else cout << " [FAILED]\n";
  assert(result == expected);
}

int main() {
  run_test({ 4,5,1,9 }, 5, { 4,1,9 }, 1); // delete 5
  run_test({ 4,5,1,9 }, 1, { 4,5,9 }, 2); // delete 1
  run_test({ 1,2,3,4 }, 2, { 1,3,4 }, 3); // delete 2
  run_test({ 1,2 }, 1, { 2 }, 4); // delete 1
  run_test({ 1,2 }, 2, { 1 }, 5); // delete 2 (should skip, as 2 is tail)
  cout << "All test cases passed!\n";
  return 0;
}
 