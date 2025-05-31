
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

    static boolean testFunction(int[] input1, int input2, int[] expected, int testNumber) {
        solution sol = new solution();
        int[] result = sol.twoSum(input1, input2);

        System.out.print("Test Case " + testNumber + ": ");
        boolean passed = java.util.Arrays.equals(result, expected);
        if (passed) {
            System.out.println("Passed");
            return true;
        } else {
            System.out.print("Failed: Expected ");
            printResult(expected);
            System.out.print(", Got ");
            printResult(result);
            System.out.println();
            return false;
        }
    }

    static void runTests() {
        int passed = 0;
        int total = 0;

        if (testFunction(new int[]{2, 7, 11, 15}, 9, new int[]{0, 1}, ++total)) {
            passed++;
        }
        if (testFunction(new int[]{3, 2, 4}, 6, new int[]{1, 2}, ++total)) {
            passed++;
        }
        if (testFunction(new int[]{3, 3}, 6, new int[]{0, 1}, ++total)) {
            passed++;
        }

        System.out.println("\nTest Results: " + passed + "/" + total + " passed.");
        System.out.println(passed == total ? "All tests passed!" : "Some tests failed.");
    }

    public static void main(String[] args) {
        runTests();
    }
}
