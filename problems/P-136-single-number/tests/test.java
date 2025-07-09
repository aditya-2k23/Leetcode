public class test {
    static void runTest(int[] nums, int expected, int testNum) {
        solution sol = new solution();
        int[] numsCopy = nums.clone();
        int result = sol.singleNumber(numsCopy);
        System.out.print("Test " + testNum + ": Input: [");
        for (int i = 0; i < nums.length; ++i) {
            System.out.print(nums[i]);
            if (i + 1 < nums.length)
                System.out.print(", ");
        }
        System.out.print("] -> Output: " + result + ", Expected: " + expected);
        if (result == expected)
            System.out.println(" [PASSED]");
        else
            System.out.println(" [FAILED]");
        assert result == expected;
    }

    public static void main(String[] args) {
        // LeetCode examples
        runTest(new int[] { 2, 2, 1 }, 1, 1);
        runTest(new int[] { 4, 1, 2, 1, 2 }, 4, 2);
        runTest(new int[] { 1 }, 1, 3);
        // Additional test cases
        runTest(new int[] { 0, 1, 0 }, 1, 4);
        runTest(new int[] { -1, -1, 2 }, 2, 5);
        runTest(new int[] { 5, 7, 5, 4, 7 }, 4, 6);
        runTest(new int[] { -2147483648, 1, 1 }, -2147483648, 7);
        runTest(new int[] { 2147483647, 1, 1 }, 2147483647, 8);
        System.out.println("All test cases passed!");
    }
}
