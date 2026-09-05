#include <cctype>
#include <string>

class ValidPalindrome {
public:
    static bool isPalindrome(const std::string& s) {
        int left = 0, right = static_cast<int>(s.size()) - 1;
        while (left < right) {
            while (left < right && !std::isalnum(static_cast<unsigned char>(s[left]))) ++left;
            while (left < right && !std::isalnum(static_cast<unsigned char>(s[right]))) --right;
            if (std::tolower(static_cast<unsigned char>(s[left])) !=
                std::tolower(static_cast<unsigned char>(s[right]))) return false;
            ++left;
            --right;
        }
        return true;
    }
};