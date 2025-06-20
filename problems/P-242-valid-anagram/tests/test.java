import java.util.*;

public class test {
  static boolean testFunction(String s, String t, boolean expected, int testNumber) {
    solution sol = new solution();
    boolean result = sol.isAnagram(s, t);
    System.out.print("Test Case " + testNumber + ": Input: s=\"" + s + "\", t=\"" + t + "\" ");
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
    if (testFunction("anagram", "nagaram", true, ++total))
      passed++;
    if (testFunction("rat", "car", false, ++total))
      passed++;
    if (testFunction("", "", true, ++total))
      passed++;
    if (testFunction("a", "a", true, ++total))
      passed++;
    if (testFunction("a", "b", false, ++total))
      passed++;
    if (testFunction("ab", "ba", true, ++total))
      passed++;
    if (testFunction("abc", "cba", true, ++total))
      passed++;
    if (testFunction("abc", "ab", false, ++total))
      passed++;
    System.out.println("\nTest Results: " + passed + "/" + total + " passed.");
    if (passed == total)
      System.out.println("All tests passed!");
    else
      System.out.println("Some tests failed.");
  }
}
