/*
 * LeetCode Problem: [242]. Valid Anagram
 * Difficulty: Easy
 * Topics: Hash Table, String, Sorting
 * Date Solved: 20/06/2025
*/

import java.util.HashMap;

public class solution {
    public boolean isAnagram(String s, String t) {
        if (s.length() != t.length())
            return false;

        HashMap<Character, Integer> map = new HashMap<>();

        for (char c : s.toCharArray()) {
            map.put(c, map.getOrDefault(c, 0) + 1);
        }

        for (char c : t.toCharArray()) {
            if (!map.containsKey(c))
                return false;
            map.put(c, map.get(c) - 1);
            if (map.get(c) == 0)
                map.remove(c);
        }

        return map.isEmpty();
    }
}
