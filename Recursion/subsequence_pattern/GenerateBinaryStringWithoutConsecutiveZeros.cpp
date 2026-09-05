#include <string>
#include <vector>

class GenerateBinaryStringWithoutConsecutiveZeros {
    static void helper(std::vector<std::string>& result, const std::string& current, int n) {
        if (static_cast<int>(current.size()) == n) { result.push_back(current); return; }
        helper(result, current + '1', n);
        if (current.empty() || current.back() == '1') helper(result, current + '0', n);
    }
public:
    static std::vector<std::string> validStrings(int n) {
        std::vector<std::string> result;
        helper(result, "", n);
        return result;
    }
};