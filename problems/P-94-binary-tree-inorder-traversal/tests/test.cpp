#include "../solution.cpp"
#include <iostream>
#include <vector>
#include <cassert>
using namespace std;

TreeNode* buildTree(const vector<int>& nodes, int& idx) {
  if (idx >= nodes.size() || nodes[idx] == -1) {
    idx++;
    return nullptr;
  }
  TreeNode* root = new TreeNode(nodes[idx++]);
  root->left = buildTree(nodes, idx);
  root->right = buildTree(nodes, idx);
  return root;
}

void run_test(const vector<int>& treeNodes, const vector<int>& expected, int test_num) {
  int idx = 0;
  TreeNode* root = buildTree(treeNodes, idx);
  Solution sol;
  vector<int> result = sol.inorderTraversal(root);
  cout << "Test " << test_num << ": Output: [";
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
  // Test cases: tree is represented in pre-order with -1 as null
  run_test({ 1, -1, 2, 3, -1, -1, -1 }, { 1,3,2 }, 1); // [1,null,2,3]
  run_test({}, {}, 2); // Empty tree
  run_test({ 1, -1, -1 }, { 1 }, 3); // Single node
  run_test({ 1, 2, -1, -1, 3, -1, -1 }, { 2,1,3 }, 4); // [1,2,3]
  run_test({ 4, 2, 1, -1, -1, 3, -1, -1, 5, -1, -1 }, { 1,2,3,4,5 }, 5); // [4,2,1,null,3,null,null,5]
  cout << "All test cases passed!\n";
  return 0;
}
