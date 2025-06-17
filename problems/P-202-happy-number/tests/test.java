public class test {

  public static boolean testFunction(int input, boolean expected, int testNumber) {
    solution sol = new solution();
    boolean result = sol.isHappy(input); // Can get red squiggle here, but it is fine since the solution is in the same
                                         // package.

    System.out.print("Test Case " + testNumber + ": ");
    System.out.print("Input: " + input + " | ");
    System.out.print("Expected: " + expected + " | ");
    System.out.print("Got: " + result + " | ");

    if (result == expected) {
      System.out.println("Passed");
      return true;
    } else {
      System.out.println("Failed");
      return false;
    }
  }

  public static void main(String[] args) {
    int passed = 0, total = 0;

    if (testFunction(1, true, ++total))
      passed++;
    if (testFunction(19, true, ++total))
      passed++;
    if (testFunction(2, false, ++total))
      passed++;
    if (testFunction(7, true, ++total))
      passed++;
    if (testFunction(20, false, ++total))
      passed++;
    if (testFunction(100, true, ++total))
      passed++;

    System.out.println("\nTest Results: " + passed + "/" + total + " passed.");
    if (passed == total)
      System.out.println("All tests passed!");
    else
      System.out.println("Some tests failed.");
  }
}
