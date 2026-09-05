#include <string>
#include <array>
#include <vector>

class letter_combination_of_a_phone_num {
    static void helper(int index, const std::string& digits, const std::array<std::string, 10>& mapping,
                       std::vector<std::string>& result, std::string& current) {
        if (index == static_cast<int>(digits.size())) { result.push_back(current); return; }
        for (char letter : mapping[digits[index] - '0']) {
            current.push_back(letter);
            helper(index + 1, digits, mapping, result, current);
            current.pop_back();
        }
    }
public:
    static std::vector<std::string> letterCombinations(const std::string& digits) {
        if (digits.empty()) return {};
        std::vector<std::string> result;
        std::string current;
        const std::array<std::string, 10> mapping = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        helper(0, digits, mapping, result, current);
        return result;
    }
};