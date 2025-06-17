/*
 * LeetCode Problem: 202. Happy Number
 * Difficulty: Easy
 * Topics: Hash Table, Math, Two Pointers
 * Date Solved: 17/06/2025
*/

public class solution {
  private int sqDigits(int n) {
    int sum = 0;
    while (n > 0) {
      int rem = n % 10;
      sum += rem * rem;
      n /= 10;
    }

    return sum;
  }

  // Two-Pointer Approach (Floyd's Cycle Detection)
  public boolean isHappy(int n) {
    int slow = n;
    int fast = sqDigits(n);

    while (slow != fast && fast != 1) {
      slow = sqDigits(slow);
      fast = sqDigits(sqDigits(fast));
    }

    return fast == 1;
  }
};
