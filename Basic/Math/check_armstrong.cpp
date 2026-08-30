#include <cmath>
#include <iostream>
using namespace std;
class check_armstrong {
public:
    bool sol(int n) {
        int p = (int)log10(n) + 1;
        int sum = 0;
        int org = n;

        while (n != 0) {
            int temp = n % 10;
            sum += pow(temp, p);
            n /= 10;
        }
        return sum == org;
    }
};
