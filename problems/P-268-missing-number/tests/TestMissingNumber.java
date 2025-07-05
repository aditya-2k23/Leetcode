public class test {
  static void runTest(int[] nums, int expected, int testNum) {
    int[] nums1 = nums.clone();
    int[] nums2 = nums.clone();
    solution1 sol1 = new solution1();
    solution2 sol2 = new solution2();
    int result1 = sol1.missingNumber(nums1);
    int result2 = sol2.missingNumber(nums2);
    System.out.print("Test " + testNum + ": Input: [");
    for (int i = 0; i < nums.length; ++i) {
      System.out.print(nums[i]);
      if (i + 1 < nums.length)
        System.out.print(", ");
    }
    System.out.println("]");
    System.out.print("  solution1.java Output: " + result1 + ", Expected: " + expected);
    if (result1 == expected)
      System.out.println(" [PASSED]");
    else
      System.out.println(" [FAILED]");
    assert result1 == expected;
    System.out.print("  solution2.java Output: " + result2 + ", Expected: " + expected);
    if (result2 == expected)
      System.out.println(" [PASSED]");
    else
      System.out.println(" [FAILED]");
    assert result2 == expected;
  }

  public static void main(String[] args) {
    // LeetCode examples
    runTest(new int[] { 3, 0, 1 }, 2, 1);
    runTest(new int[] { 0, 1 }, 2, 2);
    runTest(new int[] { 9, 6, 4, 2, 3, 5, 7, 0, 1 }, 8, 3);
    // Additional cases
    runTest(new int[] { 0 }, 1, 4);
    runTest(new int[] { 1 }, 0, 5);
    runTest(new int[] { 0, 2 }, 1, 6);
    runTest(new int[] { 1, 2 }, 0, 7);
    runTest(new int[] { 2, 1 }, 0, 8);
    runTest(new int[] { 0, 1, 2, 3, 4, 5, 6, 7, 8, 10 }, 9, 9);
    System.out.println("All test cases passed!");
  }
}
