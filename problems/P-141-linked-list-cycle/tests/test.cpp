#include "../solution.cpp"
#include <bits/stdc++.h>
using namespace std;

// Helper function to create a linked list with or without a cycle
ListNode* createList(const vector<int>& vals, int pos) {
  if (vals.empty()) return nullptr;
  ListNode* head = new ListNode(vals[0]);
  ListNode* curr = head;
  ListNode* cycleEntry = nullptr;
  if (pos == 0) cycleEntry = head;
  for (int i = 1; i < vals.size(); ++i) {
    curr->next = new ListNode(vals[i]);
    curr = curr->next;
    if (i == pos) cycleEntry = curr;
  }
  if (pos != -1) curr->next = cycleEntry;
  return head;
}

void freeList(ListNode* head, int maxNodes = 100) {
  unordered_set<ListNode*> visited;
  int count = 0;
  while (head && count < maxNodes) {
    if (visited.count(head)) break;
    visited.insert(head);
    ListNode* tmp = head;
    head = head->next;
    delete tmp;
    ++count;
  }
}

bool testFunction(const vector<int>& vals, int pos, bool expected, int testNumber) {
  Solution sol;
  ListNode* head = createList(vals, pos);
  bool result = sol.hasCycle(head);
  cout << "Test Case " << testNumber << ": ";
  cout << "Input: vals=[";
  for (size_t i = 0; i < vals.size(); ++i) {
    cout << vals[i];
    if (i < vals.size() - 1) cout << ",";
  }
  cout << "], pos=" << pos << " ";
  if (result == expected) {
    cout << "Passed\n";
    freeList(head);
    return true;
  }
  else {
    cout << "Failed: Expected " << (expected ? "true" : "false") << ", Got " << (result ? "true" : "false") << "\n";
    freeList(head);
    return false;
  }
}

void runTests() {
  int passed = 0, total = 0;
  // Test cases: vector, pos (cycle entry, -1 for no cycle), expected
  if (testFunction({ 3,2,0,-4 }, 1, true, ++total)) passed++;
  if (testFunction({ 1,2 }, 0, true, ++total)) passed++;
  if (testFunction({ 1 }, -1, false, ++total)) passed++;
  if (testFunction({}, -1, false, ++total)) passed++;
  if (testFunction({ 1,2,3,4,5 }, -1, false, ++total)) passed++;
  if (testFunction({ 1,2,3,4,5 }, 2, true, ++total)) passed++;
  cout << "\nTest Results: " << passed << "/" << total << " passed.\n";
  if (passed == total) cout << "All tests passed!\n";
  else cout << "Some tests failed.\n";
}

int main() {
  runTests();
  return 0;
}
