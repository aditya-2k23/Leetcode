
public class test {

  static boolean testFunction(String input, int expected, int testNumber) {
    solution sol = new solution(); // solution class should be in the same directory
    int result = sol.myAtoi(input); // use correct method name

    System.out.print("Test Case " + testNumber + ": ");
    System.out.print("Input: \"" + input + "\" ");
    System.out.print("\tExpected: " + expected);
    System.out.print("\tGot: " + result);

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

    // Add test cases
    if (testFunction("42", 42, ++total))
      passed++;
    if (testFunction("   -42", -42, ++total))
      passed++;
    if (testFunction("4193 with words", 4193, ++total))
      passed++;
    if (testFunction("words and 987", 0, ++total))
      passed++;
    if (testFunction("-91283472332", Integer.MIN_VALUE, ++total))
      passed++; // Clamp to INT_MIN
    if (testFunction("91283472332", Integer.MAX_VALUE, ++total))
      passed++; // Clamp to INT_MAX
    if (testFunction("+1", 1, ++total))
      passed++;
    if (testFunction("  0000000000012345678  ", 12345678, ++total))
      passed++;
    if (testFunction("-000000000000001", -1, ++total))
      passed++;

    System.out.println("\nTest Results: " + passed + "/" + total + " passed.");
    System.out.println(passed == total ? "All tests passed!" : "Some tests failed.");
  }

  public static void main(String[] args) {
    runTests();
  }
}
