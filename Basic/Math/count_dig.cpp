#include <cmath>
#include <iostream>
using namespace std;
int solve(int n) {
    int cnt = 0;
    while (n != 0) {
        n /= 10;
        cnt++;
    }
    return cnt;
}
int countDigitsLog(int n) {
    if (n == 0) {
        return 1;
    }
    return (int)log10(n) + 1;
}
