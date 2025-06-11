/*
 * LeetCode Problem: 70. Climbing Stairs
 * Difficulty: Easy
 * Topics: Math, Dynamic Programming, Memoization, Recursion
 * Date Solved: 11/06/2025
*/

import java.util.HashMap;

public class solution {
  private static HashMap<Integer, Integer> memo = new HashMap<>();

  public int climbStairs(int n) {
    if (n == 1)
      return 1;
    if (n == 2)
      return 2;

    if (memo.containsKey(n))
      return memo.get(n);

    int result = climbStairs(n - 1) + climbStairs(n - 2);
    memo.put(n, result);

    return result;
  }
}
