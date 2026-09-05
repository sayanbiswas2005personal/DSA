#include <cmath>
#include <string>

class CheckArmstrong {
public:
    static bool isArmstrong(int n) {
        int power = static_cast<int>(std::to_string(n).size());
        int original = n, total = 0;
        while (n != 0) {
            total += static_cast<int>(std::pow(n % 10, power));
            n /= 10;
        }
        return total == original;
    }
};