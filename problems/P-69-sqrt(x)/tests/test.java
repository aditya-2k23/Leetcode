// File: tests/Test.java

import java.util.*;

public class test {
  public static void main(String[] args) {
    int passed = 0, total = 0;

    if (testFunction(4, 2, ++total))
      passed++;
    if (testFunction(8, 2, ++total))
      passed++;
    if (testFunction(0, 0, ++total))
      passed++;
    if (testFunction(1, 1, ++total))
      passed++;
    if (testFunction(2147395600, 46340, ++total))
      passed++;
    if (testFunction(2147483647, 46340, ++total))
      passed++;
    if (testFunction(16, 4, ++total))
      passed++;
    if (testFunction(25, 5, ++total))
      passed++;
    if (testFunction(36, 6, ++total))
      passed++;
    if (testFunction(363, 19, ++total))
      passed++;
    if (testFunction(9312, 96, ++total))
      passed++;
    if (testFunction(2147395600, 46340, ++total))
      passed++;

    System.out.println("\nTest Results: " + passed + "/" + total + " passed.");
    if (passed == total)
      System.out.println("All tests passed!");
    else
      System.out.println("Some tests failed.");
  }

  public static boolean testFunction(int input, int expected, int testNumber) {
    solution sol = new solution();
    int result = sol.mySqrt(input);

    System.out.print("Test Case " + testNumber + ": Input = " + input);
    System.out.print(", Output = " + result);
    System.out.print(", Expected = " + expected);

    if (result == expected) {
      System.out.println("\tPassed");
      return true;
    } else {
      System.out.println("\tFailed");
      return false;
    }
  }
}
