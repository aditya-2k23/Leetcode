## Java Test Template

Template may be changed to fit the problem. The template is designed to be used with most of the LeetCode problems.
But, it may not be suitable for all problems. You can modify the template as per your requirements.

_(Recommended to use AI tools to modify the template)_

### Usage

```bash
# ! Change directory to the problem folder (not in the tests folder)!
javac .\solution.java tests/test.java
java -cp ".;tests" test
```

---

```java
public class Test {
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
        Solution sol = new Solution();
        int[] result = sol.methodName(input1, input2); // Replace with actual function name

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

        // Add test cases here
        // Example: if (testFunction(new int[]{2, 7, 11, 15}, 9, new int[]{0, 1}, ++total)) passed++;

        System.out.println("\nTest Results: " + passed + "/" + total + " passed.");
        System.out.println(passed == total ? "All tests passed!" : "Some tests failed.");
    }

    public static void main(String[] args) {
        runTests();
    }
}
```
