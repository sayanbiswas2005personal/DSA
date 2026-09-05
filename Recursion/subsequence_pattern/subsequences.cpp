#include <vector>

class subsequences {
    static void helper(int index, const std::vector<int>& numbers, std::vector<std::vector<int>>& result,
                       std::vector<int>& current) {
        result.push_back(current);
        for (int i = index; i < static_cast<int>(numbers.size()); ++i) {
            current.push_back(numbers[i]);
            helper(i + 1, numbers, result, current);
            current.pop_back();
        }
    }
    static void helper1(int index, const std::vector<int>& numbers, std::vector<std::vector<int>>& result,
                        std::vector<int>& current) {
        if (index == static_cast<int>(numbers.size())) { result.push_back(current); return; }
        current.push_back(numbers[index]);
        helper1(index + 1, numbers, result, current);
        current.pop_back();
        helper1(index + 1, numbers, result, current);
    }
public:
    static std::vector<std::vector<int>> subsets(const std::vector<int>& numbers) {
        std::vector<std::vector<int>> result;
        std::vector<int> current;
        helper(0, numbers, result, current);
        return result;
    }
    static std::vector<std::vector<int>> subsets1(const std::vector<int>& numbers) {
        std::vector<std::vector<int>> result;
        std::vector<int> current;
        helper1(0, numbers, result, current);
        return result;
    }
};