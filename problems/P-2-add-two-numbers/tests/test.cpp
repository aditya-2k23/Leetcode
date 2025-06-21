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

bool testFunction(const vector<int>& l1, const vector<int>& l2, const vector<int>& expected, int testNumber) {
  Solution sol;
  ListNode* list1 = createList(l1);
  ListNode* list2 = createList(l2);
  ListNode* result = sol.addTwoNumbers(list1, list2);
  vector<int> resultVec = toVector(result);
  cout << "Test Case " << testNumber << ": ";
  cout << "Input1: [";
  for (size_t i = 0; i < l1.size(); ++i) { cout << l1[i]; if (i < l1.size() - 1) cout << ","; }
  cout << "] Input2: [";
  for (size_t i = 0; i < l2.size(); ++i) { cout << l2[i]; if (i < l2.size() - 1) cout << ","; }
  cout << "] ";
  if (resultVec == expected) {
    cout << "Passed\n";
    freeList(list1); freeList(list2); freeList(result);
    return true;
  }
  else {
    cout << "Failed: Expected [";
    for (size_t i = 0; i < expected.size(); ++i) { cout << expected[i]; if (i < expected.size() - 1) cout << ","; }
    cout << "], Got [";
    for (size_t i = 0; i < resultVec.size(); ++i) { cout << resultVec[i]; if (i < resultVec.size() - 1) cout << ","; }
    cout << "]\n";
    freeList(list1); freeList(list2); freeList(result);
    return false;
  }
}

void runTests() {
  int passed = 0, total = 0;
  if (testFunction({ 2,4,3 }, { 5,6,4 }, { 7,0,8 }, ++total)) passed++; // 342+465=807
  if (testFunction({ 0 }, { 0 }, { 0 }, ++total)) passed++;
  if (testFunction({ 9,9,9,9,9,9,9 }, { 9,9,9,9 }, { 8,9,9,9,0,0,0,1 }, ++total)) passed++; // 9999999+9999=10009998
  if (testFunction({ 1,8 }, { 0 }, { 1,8 }, ++total)) passed++;
  if (testFunction({ 5 }, { 5 }, { 0,1 }, ++total)) passed++; // 5+5=10
  if (testFunction({ 1 }, { 9,9,9 }, { 0,0,0,1 }, ++total)) passed++; // 1+999=1000
  if (testFunction({ 9,9,9 }, { 1 }, { 0,0,0,1 }, ++total)) passed++; // 999+1=1000
  if (testFunction({ 2,4,9 }, { 5,6,4,9 }, { 7,0,4,0,1 }, ++total)) passed++; // 942+9465=10407
  if (testFunction({ 0,1 }, { 0,1,2 }, { 0,2,2 }, ++total)) passed++; // 10+210=220
  if (testFunction({ 9,9 }, { 1 }, { 0,0,1 }, ++total)) passed++; // 99+1=100
  if (testFunction({ 1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1 }, { 5,6,4 }, { 6,6,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1 }, ++total)) passed++; // Large numbers
  cout << "\nTest Results: " << passed << "/" << total << " passed.\n";
  if (passed == total) cout << "All tests passed!\n";
  else cout << "Some tests failed.\n";
}

int main() {
  runTests();
  return 0;
}
