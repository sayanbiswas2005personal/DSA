#include <cmath>
#include <iostream>
#include <vector>
using namespace std;
vector<int> getDivisors(int n)
{
    vector<int> ans;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            ans.push_back(i);
            if (i != n / i)
            {
                ans.push_back(n / i);
            }
        }
    }
    sort(ans.begin(), ans.end());
    return ans;
}