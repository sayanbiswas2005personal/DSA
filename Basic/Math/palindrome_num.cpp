#include <iostream>
using namespace std;
class palindrome_num {
public:
    bool solve(int x) {
        if (x < 0) {
            return false;
        }

        long long rev = 0;
        int org = x;

        while (x != 0) {
            int temp = x % 10;
            rev = rev * 10 + temp;
            x /= 10;
        }

        return rev == org;
    }
};
