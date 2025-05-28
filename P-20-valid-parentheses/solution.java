/*
 * LeetCode Problem: 20. Valid Parentheses
 * Difficulty: Easy
 * Topics: String, Stack
 * Date Solved: 28/05/2025
 */

public class solution {
  public boolean isValid(String s) {
    int prev = -1;

    while (s.length() != prev) {
      prev = s.length();
      s = s.replace("()", "")
          .replace("[]", "")
          .replace("{}", "");
    }

    return s.isEmpty();
  }
}
