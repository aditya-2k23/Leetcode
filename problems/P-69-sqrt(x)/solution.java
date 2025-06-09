/*
 * LeetCode Problem: 69. Sqrt(x)
 * Difficulty: Easy
 * Topics: Math, Binary Search
 * Date Solved: 09/06/2025
*/

public class solution {
  // Brute Force method
  public int mySqrt(int x) {
    long ans = 0;
    for (long i = 0; i * i <= x; i++)
      ans = i;
    return (int) ans;
  }
}