# Problem 2: Add Two Numbers

- **Difficulty**: Medium
- **Topics**: Linked List, Math, Recursion
- **LeetCode Link**: [Problem URL](https://leetcode.com/problems/add-two-numbers/)

## Problem Description

You are given two **non-empty** linked lists representing two non-negative integers. The digits are stored in **reverse order**, and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.

You may assume the two numbers do not contain any leading zero, except the number `0` itself.

**Example 1:**

![img](https://assets.leetcode.com/uploads/2020/10/02/addtwonumber1.jpg)

> Input: l1 = [2,4,3], l2 = [5,6,4]  
> Output: [7,0,8]  
> Explanation: 342 + 465 = 807.

**Example 2:**

> Input: l1 = [0], l2 = [0]  
> Output: [0]

**Example 3:**

> Input: l1 = [9,9,9,9,9,9,9], l2 = [9,9,9,9]  
> Output: [8,9,9,9,0,0,0,1]

**Constraints:**

- The number of nodes in each linked list is in the range `[1, 100]`.
- `0 <= Node.val <= 9`
- It is guaranteed that the list represents a number that does not have leading zeros.

## Approach

So, there are total of three approaches to solve this problem:

### **Iterative Approach**: Traverse both linked lists, adding corresponding digits and managing carry

#### Steps

1. Add the values of the nodes one by one in a `sum` variable.
2. Set the carry for the next iteration as `sum // 10`.
3. Create a new node with the value `sum % 10` and link it to the result list.
4. Move to the next nodes in both linked lists.
5. Continue until both linked lists are fully traversed and there is no carry left.
6. If there is a carry left after the last addition, create a new node with that carry value.
7. Return the head of the result linked list.

### **Recursive Approach**: Use recursion to add corresponding digits and handle carry

#### Steps

1. Define a recursive function that takes two nodes and a carry as parameters.
2. If both nodes are null and carry is 0, return null.
3. Then calculate the sum of the values of the nodes and the carry.
4. Create a new node with the value `sum % 10`.
5. Set the carry for the next recursive call as `sum // 10`.
6. Call the recursive function for the next nodes in both linked lists, passing the carry.
7. Link the new node to the result of the recursive call.
8. Return the new node as the head of the result linked list.

### **Convert to Integer**: Convert both linked lists to integers, add them, and convert the result back to a linked list  

- _(But this won't work for large numbers due to integer overflow. So, we can't use this approach in LeetCode.)_

#### Steps

1. Traverse both linked lists to convert them into integers.
2. Add the two integers.
3. Convert the sum back into a linked list.
4. Return the head of the new linked list.

## Solution

- **Language**: C++ (Iterative Approach)
- **File**: [solution.cpp](solution.cpp)

##

- **Language**: Python (Recursive Approach)
- **File**: [solution.py](solution.py)

##

- **Language**: Java (Convert to Integer Approach) _Not recommended for large numbers_
- **File**: [solution.java](solution.java)

## Notes

- The iterative approach is generally preferred for this problem due to its efficiency and simplicity.
- The recursive approach is elegant but may lead to stack overflow for very long linked lists.

### Complexity Analysis

- **Time Complexity**:
  - **Iterative Approach**: O(max(m, n)), where m and n are the lengths of the two linked lists.
  - **Recursive Approach**: O(max(m, n)), where m and n are the lengths of the two linked lists.
  - **Convert to Integer Approach**: O(m + n), where m and n are the lengths of the two linked lists.
- **Space Complexity**:
  - **Iterative Approach**: O(max(m, n)), for the result linked list.
  - **Recursive Approach**: O(max(m, n)), for the recursion stack.
  - **Convert to Integer Approach**: O(1), if we ignore the space used for the result linked list.

## Test Cases

See the [`tests`](/tests/) directory for test cases in different languages.

- **C++**: [test.cpp](tests/test.cpp)
- **Python**: [test.py](tests/test.py)
- **Java**: [test.java](tests/test.java)
- **Test Cases**: The test cases cover various scenarios including:
  - Basic addition of two numbers.
  - Handling of carry in the addition.
  - Edge cases like adding zeros.
  - Large numbers represented by linked lists.

### Running Tests

- **C++ (Simple)**: `cd tests; g++ test.cpp ../solution.cpp -o test; ./test`
- **Python**: `cd tests; python test.py`
- **Java**: `javac .\solution.java tests/test.java; java -cp ".;tests" test`

---

> **Solved on**: 21/06/2025 |
> **Time taken**: 00:23:05 |
> **Attempts**: 5
