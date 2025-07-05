import sys
sys.path.append('..')
from solution import Solution

def run_test(nums, expected, test_num):
    sol = Solution()
    result = sol.missingNumber(nums[:])
    print(f"Test {test_num}: Input: {nums} -> Output: {result}, Expected: {expected}", end=' ')
    if result == expected:
        print("[PASSED]")
    else:
        print("[FAILED]")
    assert result == expected

def main():
    # LeetCode examples
    run_test([3,0,1], 2, 1)
    run_test([0,1], 2, 2)
    run_test([9,6,4,2,3,5,7,0,1], 8, 3)
    # Additional cases
    run_test([0], 1, 4)
    run_test([1], 0, 5)
    run_test([0,2], 1, 6)
    run_test([1,2], 0, 7)
    run_test([2,1], 0, 8)
    run_test([0,1,2,3,4,5,6,7,8,10], 9, 9)
    print("All test cases passed!")

if __name__ == "__main__":
    main()
