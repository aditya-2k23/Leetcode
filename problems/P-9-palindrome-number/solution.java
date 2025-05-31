/*
 * LeetCode Problem: 9. Palindrome Number
 * Difficulty: Easy
 * Topics: Math, String Manipulation
 * Date Solved: 23/05/2025
 */

public class solution {

    public boolean isPalindrome(int x) {
        if (x < 0) {
            return false;
        }

        String s = String.valueOf(x);
        StringBuilder rev = new StringBuilder(s).reverse();

        return s.equals(rev.toString());
    }
}
