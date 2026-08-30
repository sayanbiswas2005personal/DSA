#include <iostream>
using namespace std;
void helper(int idx, string &s, vector<string> &ans, string &ds)
{
    if (idx == s.size())
    {
        ans.push_back(ds);
        return;
    }
    ds.push_back(s[idx]);
    helper(idx + 1, s, ans, ds);
    ds.pop_back();
    helper(idx + 1, s, ans, ds);
}
vector<string> powerSet(string &s)
{
    // Code here
    vector<string> ans;
    string ds = "";
    helper(0, s, ans, ds);
    sort(ans.begin(), ans.end());
    return ans;
}