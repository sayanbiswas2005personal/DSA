#include <iostream>
using namespace std;
void helper(int n, vector<string> &ans, string &ds, int start, int end)
{
    if (ds.size() == 2 * n)
    {
        ans.push_back(ds);
        return;
    }
    if (start < n)
    {
        ds.push_back('(');
        helper(n, ans, ds, start + 1, end);
        ds.pop_back();
    }
    if (end < start)
    {
        ds.push_back(')');
        helper(n, ans, ds, start, end + 1);
        ds.pop_back();
    }
}
vector<string> generateParenthesis(int n)
{
    vector<string> ans;
    string ds = "";
    helper(n, ans, ds, 0, 0);
    return ans;
}