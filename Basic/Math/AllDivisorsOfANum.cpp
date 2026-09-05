#include <algorithm>
#include <vector>

class AllDivisorsOfANum {
public:
    static std::vector<int> getDivisors(int n) {
        std::vector<int> result;
        for (int i = 1; i * i <= n; ++i) {
            if (n % i == 0) {
                result.push_back(i);
                if (i != n / i) result.push_back(n / i);
            }
        }
        std::sort(result.begin(), result.end());
        return result;
    }
};