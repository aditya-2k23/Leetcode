public class test {

  static boolean testFunction(int input, int expected, int testNumber) {
    solution sol = new solution(); // Your class name must be 'solution' and contain 'climbStairs'
    int result = sol.climbStairs(input); // Actual function call

    System.out.print("Test Case " + testNumber + ": ");
    System.out.print("Input: " + input + " ");
    if (result == expected) {
      System.out.println("\tPassed");
      return true;
    } else {
      System.out.println("Failed: Expected " + expected + ", Got " + result);
      return false;
    }
  }

  static void runTests() {
    int passed = 0;
    int total = 0;

    // Add test cases
    if (testFunction(1, 1, ++total))
      passed++;
    if (testFunction(2, 2, ++total))
      passed++;
    if (testFunction(3, 3, ++total))
      passed++;
    if (testFunction(4, 5, ++total))
      passed++;
    if (testFunction(5, 8, ++total))
      passed++;
    if (testFunction(10, 89, ++total))
      passed++;
    if (testFunction(20, 10946, ++total))
      passed++;
    if (testFunction(30, 1346269, ++total))
      passed++;
    if (testFunction(45, 1836311903, ++total))
      passed++;

    System.out.println("\nTest Results: " + passed + "/" + total + " passed.");
    System.out.println(passed == total ? "All tests passed!" : "Some tests failed.");
  }

  public static void main(String[] args) {
    runTests();
  }
}
