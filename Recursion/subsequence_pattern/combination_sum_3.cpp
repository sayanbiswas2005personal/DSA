#include <vector>

class combination_sum_3 {
    static void helper(int index, int k, int target, std::vector<std::vector<int>>& result,
                       std::vector<int>& current) {
        if (static_cast<int>(current.size()) == k) {
            if (target == 0) result.push_back(current);
            return;
        }
        for (int value = index; value <= 9; ++value) {
            if (value > target) break;
            current.push_back(value);
            helper(value + 1, k, target - value, result, current);
            current.pop_back();
        }
    }
public:
    static std::vector<std::vector<int>> combinationSum3(int k, int n) {
        std::vector<std::vector<int>> result;
        std::vector<int> current;
        helper(1, k, n, result, current);
        return result;
    }
};