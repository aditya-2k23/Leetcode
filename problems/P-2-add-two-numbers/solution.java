/*
 * LeetCode Problem: 2. Add Two Numbers
 * Difficulty: Medium
 * Topics: Linked List, Math, Recursion
 * Date Solved: 21/06/2025
*/

class ListNode {
  long val;
  ListNode next;

  ListNode(long x) {
    val = x;
  }
}

public class solution {
  private long toNumber(ListNode l) {
    long num = 0;
    long place = 1;

    while (l != null) {
      num += l.val * place;
      place *= 10;
      l = l.next;
    }

    return num;
  }

  private ListNode toList(long num) {
    if (num == 0)
      return new ListNode(0);

    ListNode head = new ListNode(0);
    ListNode temp = head;

    while (num > 0) {
      temp.next = new ListNode(num % 10);
      num /= 10;
      temp = temp.next;
    }

    return head.next;
  }

  public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
    return toList(toNumber(l1) + toNumber(l2));
  }
}
