#include <string>
#include <vector>

class GenerateParenthesis {
    static void helper(int n, std::vector<std::string>& result, const std::string& current,
                       int open, int close) {
        if (static_cast<int>(current.size()) == 2 * n) { result.push_back(current); return; }
        if (open < n) helper(n, result, current + '(', open + 1, close);
        if (close < open) helper(n, result, current + ')', open, close + 1);
    }
public:
    static std::vector<std::string> generateParenthesis(int n) {
        std::vector<std::string> result;
        helper(n, result, "", 0, 0);
        return result;
    }
};