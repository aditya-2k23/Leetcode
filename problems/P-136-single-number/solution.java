/*
 * LeetCode Problem: 136. Single Number
 * Difficulty: Easy
 * Topics: Array, Bit Manipulation
 * Date Solved: 09/07/2025
*/

public class solution {
    public int singleNumber(int[] nums) {
        int xor = 0;
        for (int i : nums) {
            xor = xor ^ i;
        }

        return xor;
    }
}
