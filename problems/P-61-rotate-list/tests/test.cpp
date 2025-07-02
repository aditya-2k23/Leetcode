#include "../solution.cpp"
#include <bits/stdc++.h>
using namespace std;

// Helper to create a linked list from a vector
ListNode* createList(const vector<int>& vals) {
  if (vals.empty()) return nullptr;
  ListNode* head = new ListNode(vals[0]);
  ListNode* curr = head;
  for (size_t i = 1; i < vals.size(); ++i) {
    curr->next = new ListNode(vals[i]);
    curr = curr->next;
  }
  return head;
}

// Helper to convert linked list to vector
vector<int> toVector(ListNode* head) {
  vector<int> res;
  while (head) {
    res.push_back(head->val);
    head = head->next;
  }
  return res;
}

// Helper to free linked list
void freeList(ListNode* head) {
  while (head) {
    ListNode* tmp = head;
    head = head->next;
    delete tmp;
  }
}

bool testFunction(const vector<int>& input, int k, const vector<int>& expected, int testNumber) {
  Solution sol;
  ListNode* list = createList(input);
  ListNode* result = sol.rotateRight(list, k);
  vector<int> resultVec = toVector(result);
  cout << "Test Case " << testNumber << ": Input: [";
  for (size_t i = 0; i < input.size(); ++i) { cout << input[i]; if (i < input.size() - 1) cout << ","; }
  cout << "], k=" << k << " ";
  if (resultVec == expected) {
    cout << "Passed\n";
    freeList(result);
    return true;
  }
  else {
    cout << "Failed: Expected [";
    for (size_t i = 0; i < expected.size(); ++i) { cout << expected[i]; if (i < expected.size() - 1) cout << ","; }
    cout << "], Got [";
    for (size_t i = 0; i < resultVec.size(); ++i) { cout << resultVec[i]; if (i < resultVec.size() - 1) cout << ","; }
    cout << "]\n";
    freeList(result);
    return false;
  }
}

void runTests() {
  int passed = 0, total = 0;
  if (testFunction({ 1,2,3,4,5 }, 2, { 4,5,1,2,3 }, ++total)) passed++;
  if (testFunction({ 0,1,2 }, 4, { 2,0,1 }, ++total)) passed++;
  if (testFunction({}, 1, {}, ++total)) passed++;
  if (testFunction({ 1 }, 0, { 1 }, ++total)) passed++;
  if (testFunction({ 1 }, 100, { 1 }, ++total)) passed++;
  if (testFunction({ 1,2 }, 1, { 2,1 }, ++total)) passed++;
  if (testFunction({ 1,2 }, 2, { 1,2 }, ++total)) passed++;
  if (testFunction({ 1,2 }, 3, { 2,1 }, ++total)) passed++;
  if (testFunction({ 1,2,3 }, 2000000000, { 2,3,1 }, ++total)) passed++;
  if (testFunction({ 1,2,3,4,5 }, 0, { 1,2,3,4,5 }, ++total)) passed++;
  if (testFunction({ 1,2,3,4,5 }, 5, { 1,2,3,4,5 }, ++total)) passed++;
  cout << "\nTest Results: " << passed << "/" << total << " passed.\n";
  if (passed == total) cout << "All tests passed!\n";
  else cout << "Some tests failed.\n";
}

int main() {
  runTests();
  return 0;
}
