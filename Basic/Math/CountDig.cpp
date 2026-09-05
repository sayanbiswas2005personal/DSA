#include <cmath>

class CountDig {
public:
    static int solve(int n) {
        int count = 0;
        while (n != 0) { n /= 10; ++count; }
        return count;
    }

    static int countDigitsLog(int n) {
        if (n == 0) return 1;
        return static_cast<int>(std::log10(n) + 1);
    }
};