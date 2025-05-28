public class test {
  static void printResult(int[] result) {
    System.out.print("[");
    for (int i = 0; i < result.length; ++i) {
      System.out.print(result[i]);
      if (i < result.length - 1) {
        System.out.print(",");
      }
    }
    System.out.print("]");
  }

  static void printResult(boolean result) {
    System.out.print(result ? "true" : "false");
  }

  static boolean testFunction(String input, boolean expected, int testNumber) {
    solution sol = new solution();
    boolean result = sol.isValid(input); // Might give red squiggles in some IDEs but it works fine (trust).

    System.out.print("Test Case " + testNumber + ": ");
    System.out.print("Input: \"" + input + "\" ");
    System.out.print("\tExpected: ");
    printResult(expected);
    System.out.print("\tGot: ");
    printResult(result);
    if (result == expected) {
      System.out.println("\tPassed");
      return true;
    } else {
      System.out.println("\tFailed");
      return false;
    }
  }

  static void runTests() {
    int passed = 0;
    int total = 0;
    if (testFunction("()", true, ++total))
      passed++;
    if (testFunction("()[]{}", true, ++total))
      passed++;
    if (testFunction("(]", false, ++total))
      passed++;
    if (testFunction("([])", true, ++total))
      passed++;
    if (testFunction("([)]", false, ++total))
      passed++;
    if (testFunction("{[]}", true, ++total))
      passed++;
    if (testFunction("((()))", true, ++total))
      passed++;
    if (testFunction("", true, ++total))
      passed++;
    if (testFunction("([{}])", true, ++total))
      passed++;
    if (testFunction("([)]{", false, ++total))
      passed++;

    System.out.println("\nTest Results: " + passed + "/" + total + " passed.");
    if (passed == total) {
      System.out.println("All tests passed successfully!");
    } else {
      System.out.println("Some tests failed. Please check the output for details.");
    }
  }

  public static void main(String[] args) {
    runTests();
  }
}

// The solution class must be in the same directory or classpath as this test
// file.