/*
 * LeetCode Problem: [Problem Number]. [Problem Title]
 * Difficulty: [Easy/Medium/Hard]
 * Topics: [List of topics]
 * Date Solved: [Date]
*/

import java.util.HashSet;

class ListNode {
  int val;
  ListNode next;

  ListNode(int x) {
    val = x;
  }
}

public class solution {
  public boolean hasCycle(ListNode head) {
    if (head == null)
      return false;

    HashSet<ListNode> set = new HashSet<>();

    while (head != null) {
      if (set.contains(head))
        return true;
      set.add(head);
      head = head.next;
    }

    return false;
  }
}
