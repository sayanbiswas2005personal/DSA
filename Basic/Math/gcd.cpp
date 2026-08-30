#include <iostream>
using namespace std;
class gcd {
public:
    int sol(int a, int b) {
        while (a > 0 && b > 0) {
            if (a > b) {
                a = a % b;
            } else {
                b = b % a;
            }
        }

        if (a == 0) {
            return b;
        }
        return a;
    }
};
