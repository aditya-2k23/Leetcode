/*
 * LeetCode Problem: 189. Rotate Array
 * Difficulty: Medium
 * Topics: Array, Math, Two Pointers
 * Date Solved: 04/07/2025
*/

public class solution {
  private void reverse(int[] nums, int start, int end) {
    while (start <= end) {
      int temp = nums[start];
      nums[start] = nums[end];
      nums[end] = temp;
      start++;
      end--;
    }
  }

  public void rotate(int[] nums, int k) {
    int n = nums.length;
    k %= n;
    int pos = n - k;

    reverse(nums, pos, n - 1);
    reverse(nums, 0, pos - 1);
    reverse(nums, 0, n - 1);
  }
}
