#include "../solution.cpp"
#include <bits/stdc++.h>
using namespace std;

// Helper to create a linked list from vector
ListNode* createList(const vector<int>& vals) {
  ListNode* head = nullptr;
  ListNode* tail = nullptr;
  for (int v : vals) {
    ListNode* node = new ListNode(v);
    if (!head) {
      head = node;
      tail = node;
    }
    else {
      tail->next = node;
      tail = node;
    }
  }
  return head;
}

// Helper to convert linked list to vector
vector<int> listToVector(ListNode* head) {
  vector<int> vals;
  while (head) {
    vals.push_back(head->val);
    head = head->next;
  }
  return vals;
}

// Helper to print vector
void printResult(const vector<int>& result) {
  cout << "[";
  for (size_t i = 0; i < result.size(); ++i) {
    cout << result[i];
    if (i < result.size() - 1) cout << ",";
  }
  cout << "]";
}

// Helper to free linked list
void freeList(ListNode* head) {
  while (head) {
    ListNode* tmp = head;
    head = head->next;
    delete tmp;
  }
}

// Test function for Solution::reverseList
bool testFunction(const vector<int>& input, const vector<int>& expected, int testNumber) {
  Solution sol;
  ListNode* head = createList(input);
  ListNode* reversed = sol.reverseList(head);
  vector<int> result = listToVector(reversed);

  cout << "Test Case " << testNumber << ": Input: ";
  printResult(input);
  cout << "\t\tOutput:";
  if (result == expected) {
    printResult(result);
    cout << "\tExpected: ";
    printResult(expected);
    cout << "\t\tPassed\n";
    freeList(reversed);
    return true;
  }
  else {
    cout << "Failed: Expected ";
    printResult(expected);
    cout << ", Got ";
    printResult(result);
    cout << "\n";
    freeList(reversed);
    return false;
  }
}

void runTests() {
  int passed = 0, total = 0;
  // Example 1
  if (testFunction({ 1,2,3,4,5 }, { 5,4,3,2,1 }, ++total)) passed++;
  // Example 2
  if (testFunction({ 1,2 }, { 2,1 }, ++total)) passed++;
  // Example 3 (empty list)
  if (testFunction({}, {}, ++total)) passed++;
  // Single node
  if (testFunction({ 42 }, { 42 }, ++total)) passed++;
  // Two nodes
  if (testFunction({ -1,0 }, { 0,-1 }, ++total)) passed++;
  // Negative values
  if (testFunction({ -3,-2,-1 }, { -1,-2,-3 }, ++total)) passed++;
  // Mixed values
  if (testFunction({ 5,-1,3,2 }, { 2,3,-1,5 }, ++total)) passed++;
  // Large list
  if (testFunction({ 1,2,3,4,5,6,7,8,9,10 }, { 10,9,8,7,6,5,4,3,2,1 }, ++total)) passed++;

  cout << "\nTest Results: " << passed << "/" << total << " passed.\n";
  if (passed == total) cout << "All tests passed!\n";
  else cout << "Some tests failed.\n";
}

int main() {
  runTests();
  return 0;
}
