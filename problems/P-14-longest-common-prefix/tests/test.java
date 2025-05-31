
public class test {

    static void printResult(String result) {
        System.out.print('"' + result + '"');
    }

    static boolean testFunction(String[] input, String expected, int testNumber) {
        solution sol = new solution(); // Might give red squiggly lines in some IDEs, but it's working fine.
        String result = sol.longestCommonPrefix(input);

        System.out.print("Test Case " + testNumber + ": ");
        System.out.print("Input: [");
        for (int i = 0; i < input.length; ++i) {
            System.out.print('"' + input[i] + '"');
            if (i < input.length - 1) {
                System.out.print(", ");
            }
        }
        System.out.print("] ");
        System.out.print("Expected: ");
        printResult(expected);
        System.out.print(", Got: ");
        printResult(result);
        boolean passed = result.equals(expected);
        if (passed) {
            System.out.println(" Passed");
            return true;
        } else {
            System.out.println(" Failed");
            return false;
        }
    }

    static void runTests() {
        int passed = 0;
        int total = 0;

        // Test cases for Longest Common Prefix
        if (testFunction(new String[]{"flower", "flow", "flight"}, "fl", ++total)) {
            passed++;
        }
        if (testFunction(new String[]{"dog", "racecar", "car"}, "", ++total)) {
            passed++;
        }
        if (testFunction(new String[]{"interspecies", "interstellar", "interstate"}, "inters", ++total)) {
            passed++;
        }
        if (testFunction(new String[]{"throne", "throne"}, "throne", ++total)) {
            passed++;
        }
        if (testFunction(new String[]{"a"}, "a", ++total)) {
            passed++;
        }
        if (testFunction(new String[]{"", "b"}, "", ++total)) {
            passed++;
        }
        if (testFunction(new String[]{}, "", ++total)) {
            passed++;
        }
        if (testFunction(new String[]{"prefix", "prefixes", "prefixation"}, "prefix", ++total)) {
            passed++;
        }
        if (testFunction(new String[]{"abc", "abcd", "ab"}, "ab", ++total)) {
            passed++;
        }
        if (testFunction(new String[]{"same", "same", "same"}, "same", ++total)) {
            passed++;
        }

        System.out.println("\nTest Results: " + passed + "/" + total + " passed.");
        System.out.println(passed == total ? "All tests passed!" : "Some tests failed.");
    }

    public static void main(String[] args) {
        runTests();
    }
}
