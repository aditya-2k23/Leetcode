import java.util.*;

public class test {
  // Helper to create a list with a cycle at pos, or no cycle if pos == -1
  static ListNode createList(int[] vals, int pos) {
    if (vals.length == 0)
      return null;
    ListNode head = new ListNode(vals[0]);
    ListNode curr = head, cycleEntry = null;
    if (pos == 0)
      cycleEntry = head;
    for (int i = 1; i < vals.length; ++i) {
      curr.next = new ListNode(vals[i]);
      curr = curr.next;
      if (i == pos)
        cycleEntry = curr;
    }
    if (pos != -1)
      curr.next = cycleEntry;
    return head;
  }

  static boolean testFunction(int[] vals, int pos, boolean expected, int testNumber) {
    solution sol = new solution();
    ListNode head = createList(vals, pos);
    boolean result = sol.hasCycle(head);
    System.out.print("Test Case " + testNumber + ": Input: vals=" + Arrays.toString(vals) + ", pos=" + pos + " ");
    if (result == expected) {
      System.out.println("Passed");
      return true;
    } else {
      System.out.println("Failed: Expected " + expected + ", Got " + result);
      return false;
    }
  }

  public static void main(String[] args) {
    int passed = 0, total = 0;
    if (testFunction(new int[] { 3, 2, 0, -4 }, 1, true, ++total))
      passed++;
    if (testFunction(new int[] { 1, 2 }, 0, true, ++total))
      passed++;
    if (testFunction(new int[] { 1 }, -1, false, ++total))
      passed++;
    if (testFunction(new int[] {}, -1, false, ++total))
      passed++;
    if (testFunction(new int[] { 1, 2, 3, 4, 5 }, -1, false, ++total))
      passed++;
    if (testFunction(new int[] { 1, 2, 3, 4, 5 }, 2, true, ++total))
      passed++;
    System.out.println("\nTest Results: " + passed + "/" + total + " passed.");
    if (passed == total)
      System.out.println("All tests passed!");
    else
      System.out.println("Some tests failed.");
  }
}
