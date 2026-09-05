#include <algorithm>
#include <vector>

class subsequence2 {
    static void helper(int index, const std::vector<int>& numbers, std::vector<std::vector<int>>& result,
                       std::vector<int>& current) {
        result.push_back(current);
        for (int i = index; i < static_cast<int>(numbers.size()); ++i) {
            if (i > index && numbers[i - 1] == numbers[i]) continue;
            current.push_back(numbers[i]);
            helper(i + 1, numbers, result, current);
            current.pop_back();
        }
    }
public:
    static std::vector<std::vector<int>> subsetsWithDup(std::vector<int> numbers) {
        std::sort(numbers.begin(), numbers.end());
        std::vector<std::vector<int>> result;
        std::vector<int> current;
        helper(0, numbers, result, current);
        return result;
    }
};