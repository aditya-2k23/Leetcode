
import java.util.*;

public class test {

    static void printResult(int[] result) {
        System.out.print("[");
        for (int i = 0; i < result.length; ++i) {
            System.out.print(result[i]);
            if (i < result.length - 1) {
                System.out.print(",");
            }
        }
        System.out.print("]");
    }

    static boolean testFunction(int input1, boolean expected, int testNumber) {
        solution sol = new solution();
        boolean result = sol.isPalindrome(input1);

        System.out.print("Test Case " + testNumber + ": ");
        System.out.print("Input: " + input1 + " ");
        if (result == expected) {
            System.out.println((String.valueOf(input1).length() > 2 ? "\t" : "\t\t") + "Passed");
            return true;
        } else {
            System.out.print("Failed: Expected ");
            System.out.print(expected);
            System.out.print(", Got ");
            System.out.print(result);
            System.out.println();
            return false;
        }
    }

    static void runTests() {
        int passed = 0;
        int total = 0;

        Map<Integer, Boolean> map = new HashMap<>();
        map.put(121, true);
        map.put(-121, false);
        map.put(10, false);
        map.put(12321, true);
        map.put(0, true);
        map.put(1234321, true);
        map.put(123456, false);

        for (Map.Entry<Integer, Boolean> entry : map.entrySet()) {
            total++;
            if (testFunction(entry.getKey(), entry.getValue(), total)) {
                passed++;
            }
        }

        System.out.println("\nTest Results: " + passed + "/" + total + " passed.");
        System.out.println(passed == total ? "All tests passed!" : "Some tests failed.");
    }

    public static void main(String[] args) {
        runTests();
    }
}
