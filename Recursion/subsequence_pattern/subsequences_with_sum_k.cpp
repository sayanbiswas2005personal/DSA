#include <vector>

class subsequences_with_sum_k {
    std::vector<std::vector<int>> memo;
    bool helper(int index, const std::vector<int>& numbers, int target) {
        if (target == 0) return true;
        if (index == static_cast<int>(numbers.size()) || target < 0) return false;
        int& cached = memo[index][target];
        if (cached != -1) return cached;
        return cached = helper(index + 1, numbers, target - numbers[index]) ||
                        helper(index + 1, numbers, target);
    }
public:
    bool checkSubsequenceSum(const std::vector<int>& numbers, int target) {
        memo.assign(numbers.size(), std::vector<int>(target + 1, -1));
        return helper(0, numbers, target);
    }
};