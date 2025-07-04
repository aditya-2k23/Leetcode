import java.util.*;

public class test {
  static boolean testFunction(int[] input, int k, int[] expected, int testNumber) {
    solution sol = new solution();
    int[] nums = Arrays.copyOf(input, input.length);
    sol.rotate(nums, k);
    boolean passed = Arrays.equals(nums, expected);
    System.out.print("Test Case " + testNumber + ": k = " + k + " ");
    System.out.print("Expected: " + Arrays.toString(expected) + " Got: " + Arrays.toString(nums) + " ");
    if (passed) {
      System.out.println("Passed");
      return true;
    } else {
      System.out.println("Failed");
      return false;
    }
  }

  public static void main(String[] args) {
    int passed = 0, total = 0;
    if (testFunction(new int[] { 1, 2, 3, 4, 5, 6, 7 }, 3, new int[] { 5, 6, 7, 1, 2, 3, 4 }, ++total))
      passed++;
    if (testFunction(new int[] { -1, -100, 3, 99 }, 2, new int[] { 3, 99, -1, -100 }, ++total))
      passed++;
    if (testFunction(new int[] { 1 }, 0, new int[] { 1 }, ++total))
      passed++;
    if (testFunction(new int[] { 1 }, 1, new int[] { 1 }, ++total))
      passed++;
    if (testFunction(new int[] { 1, 2 }, 1, new int[] { 2, 1 }, ++total))
      passed++;
    if (testFunction(new int[] { 1, 2 }, 2, new int[] { 1, 2 }, ++total))
      passed++;
    if (testFunction(new int[] { 1, 2, 3 }, 4, new int[] { 3, 1, 2 }, ++total))
      passed++;
    if (testFunction(new int[] { 1, 2, 3, 4, 5 }, 7, new int[] { 4, 5, 1, 2, 3 }, ++total))
      passed++;
    if (testFunction(new int[] { 1, 2, 3, 4, 5 }, 5, new int[] { 1, 2, 3, 4, 5 }, ++total))
      passed++;
    if (testFunction(new int[] { 1, 2, 3, 4, 5, 6 }, 100000, new int[] { 3, 4, 5, 6, 1, 2 }, ++total))
      passed++;
    if (testFunction(new int[] { 1, 2, 3, 4, 5, 6, 7, 8, 9 }, 4, new int[] { 6, 7, 8, 9, 1, 2, 3, 4, 5 }, ++total))
      passed++;
    if (testFunction(new int[] { -1, 0, 1, 2, 3 }, 3, new int[] { 1, 2, 3, -1, 0 }, ++total))
      passed++;
    System.out.println("\nTest Results: " + passed + "/" + total + " passed.");
    if (passed == total)
      System.out.println("All tests passed!");
    else
      System.out.println("Some tests failed.");
  }
}
