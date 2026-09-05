#include <algorithm>
#include <string>
#include <vector>

class AllSubsequencesOfAString {
    static void generate(const std::string& s, int index, const std::string& current,
                         std::vector<std::string>& result) {
        if (index == static_cast<int>(s.size())) { result.push_back(current); return; }
        generate(s, index + 1, current + s[index], result);
        generate(s, index + 1, current, result);
    }
public:
    static std::vector<std::string> powerSet(const std::string& s) {
        std::vector<std::string> result;
        generate(s, 0, "", result);
        std::sort(result.begin(), result.end());
        return result;
    }
};