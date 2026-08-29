#include <bits/stdc++.h>
using namespace std;
int solve(int n){
    int cnt = 0;
    while(n != 0){
        n /= 10;
        cnt++;
    }
    return cnt;
}