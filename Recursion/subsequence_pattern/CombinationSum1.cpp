#include <algorithm>
#include <vector>

class CombinationSum1 {
    static void helper(int index, const std::vector<int>& numbers, int target,
                       std::vector<std::vector<int>>& result, std::vector<int>& current) {
        if (target == 0) { result.push_back(current); return; }
        for (int i = index; i < static_cast<int>(numbers.size()); ++i) {
            if (numbers[i] > target) break;
            current.push_back(numbers[i]);
            helper(i, numbers, target - numbers[i], result, current);
            current.pop_back();
        }
    }
public:
    static std::vector<std::vector<int>> combinationSum(std::vector<int> numbers, int target) {
        std::sort(numbers.begin(), numbers.end());
        std::vector<std::vector<int>> result;
        std::vector<int> current;
        helper(0, numbers, target, result, current);
        return result;
    }
};