import sys
import os
# Add the parent directory to the system path
sys.path.append(os.path.abspath(os.path.join(os.path.dirname(__file__), '..')))

from solution import Solution # Assumming the solution is in a file named solution.py

def print_vector(nums, k):
    print("[", end="")
    print(", ".join(map(str, nums[:k])), end="")
    print("]", end="")

def run_test(test_num, input_list, expected_nums, expected_k):
    sol = Solution()
    nums_copy = input_list[:]  # To avoid mutating original test input
    k = sol.removeDuplicatesBrute(nums_copy)
    # k = sol.removeDuplicates(nums_copy)

    passed = k == expected_k and nums_copy[:k] == expected_nums

    print(f"Test Case #{test_num:2} | {'[PASS]' if passed else '[FAIL]'} | ", end="")
    print(f"Expected k: {expected_k}, nums: ", end="")
    print_vector(expected_nums, expected_k)
    print(" | Got k:", k, "nums: ", end="")
    print_vector(nums_copy, k)
    print()
    return passed

def run_all_tests():
    print("========== Running Python Test Suite ==========")
    test_cases = [
        ([1, 1, 2], [1, 2], 2),
        ([0,0,1,1,1,2,2,3,3,4], [0,1,2,3,4], 5),
        ([], [], 0),
        ([1,1,1,1], [1], 1),
        ([1,2,3,4,5], [1,2,3,4,5], 5),
        ([2,2,2,3,3], [2,3], 2),
        ([1], [1], 1),
        ([1,1,1,2,2,3], [1,2,3], 3),
        ([1,1,2,2,2,3,4,4,4,5], [1,2,3,4,5], 5),
        ([-1,-1,0,0,1,1,2], [-1,0,1,2], 4),
        ([float('-inf'), float('-inf'), 0, float('inf'), float('inf')], [float('-inf'), 0, float('inf')], 3)
    ]

    total = passed = 0
    for i, (input_list, expected_nums, expected_k) in enumerate(test_cases, 1):
        total += 1
        if run_test(i, input_list, expected_nums, expected_k):
            passed += 1

    print("\n========== Summary ==========")
    print(f"Passed: {passed}/{total}")
    print("All test cases passed!" if passed == total else "Some test cases failed.")

if __name__ == "__main__":
    run_all_tests()
