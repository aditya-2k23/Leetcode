import java.util.*;

// There are red squiggles in the ListNode class, but it is not necessary to fix them for the test to run.

public class test {
  static ListNode createList(long[] vals) {
    if (vals.length == 0)
      return null;
    ListNode head = new ListNode(vals[0]);
    ListNode curr = head;
    for (int i = 1; i < vals.length; ++i) {
      curr.next = new ListNode(vals[i]);
      curr = curr.next;
    }
    return head;
  }

  static List<Long> toList(ListNode node) {
    List<Long> res = new ArrayList<>();
    while (node != null) {
      res.add(node.val);
      node = node.next;
    }
    return res;
  }

  static boolean testFunction(long[] l1, long[] l2, long[] expected, int testNumber) {
    solution sol = new solution();
    ListNode list1 = createList(l1);
    ListNode list2 = createList(l2);
    ListNode result = sol.addTwoNumbers(list1, list2);
    List<Long> resultList = toList(result);
    List<Long> expectedList = new ArrayList<>();
    for (long v : expected)
      expectedList.add(v);
    System.out.print(
        "Test Case " + testNumber + ": Input1: " + Arrays.toString(l1) + " Input2: " + Arrays.toString(l2) + " ");
    if (resultList.equals(expectedList)) {
      System.out.println("Passed");
      return true;
    } else {
      System.out.println("Failed: Expected " + expectedList + ", Got " + resultList);
      return false;
    }
  }

  public static void main(String[] args) {
    int passed = 0, total = 0;
    if (testFunction(new long[] { 2, 4, 3 }, new long[] { 5, 6, 4 }, new long[] { 7, 0, 8 }, ++total))
      passed++;
    if (testFunction(new long[] { 0 }, new long[] { 0 }, new long[] { 0 }, ++total))
      passed++;
    if (testFunction(new long[] { 9, 9, 9, 9, 9, 9, 9 }, new long[] { 9, 9, 9, 9 },
        new long[] { 8, 9, 9, 9, 0, 0, 0, 1 },
        ++total))
      passed++;
    if (testFunction(new long[] { 1, 8 }, new long[] { 0 }, new long[] { 1, 8 }, ++total))
      passed++;
    if (testFunction(new long[] { 5 }, new long[] { 5 }, new long[] { 0, 1 }, ++total))
      passed++;
    if (testFunction(new long[] { 1 }, new long[] { 9, 9, 9 }, new long[] { 0, 0, 0, 1 }, ++total))
      passed++;
    if (testFunction(new long[] { 9, 9, 9 }, new long[] { 1 }, new long[] { 0, 0, 0, 1 }, ++total))
      passed++;
    if (testFunction(new long[] { 2, 4, 9 }, new long[] { 5, 6, 4, 9 }, new long[] { 7, 0, 4, 0, 1 }, ++total))
      passed++;
    if (testFunction(new long[] { 0, 1 }, new long[] { 0, 1, 2 }, new long[] { 0, 2, 2 }, ++total))
      passed++;
    if (testFunction(new long[] { 9, 9 }, new long[] { 1 }, new long[] { 0, 0, 1 }, ++total))
      passed++;
    if (testFunction(
        new long[] { 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
        new long[] { 5, 6, 4 },
        new long[] { 6, 6, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
        ++total))
      passed++;
    System.out.println("\nTest Results: " + passed + "/" + total + " passed.");
    if (passed == total)
      System.out.println("All tests passed!");
    else
      System.out.println("Some tests failed.");

    System.out.print(
        "The last test case will not pass with the current implementation because it is too large of a number and even long in Java cannot handle it. So, that's why this approach is not appropriate for this problem.");
  }
}
