#include <iostream>
using namespace std;
void helper(vector<string> &ans, string &ds, int n)
{
    if (ds.size() == n)
    {
        ans.push_back(ds);
        return;
    }
    ds.push_back('1');
    helper(ans, ds, n);
    ds.pop_back();
    if (ds.empty() || ds.back() == '1')
    {
        ds.push_back('0');
        helper(ans, ds, n);
        ds.pop_back();
    }
}
vector<string> validStrings(int n)
{
    vector<string> ans;
    string ds = "";
    helper(ans, ds, n);
    return ans;
}