#include <iostream>
using namespace std;
void helper(int idx, vector<int> &arr, int target, vector<vector<int>> &ans, vector<int> &ds)
{
    if (target == 0)
    {
        ans.push_back(ds);
        return;
    }
    for (int i = idx; i <= arr.size() - 1; i++)
    {
        if (i > idx && arr[i] == arr[i - 1])
            continue;
        if (arr[i] > target)
            break;
        ds.push_back(arr[i]);
        helper(i + 1, arr, target - arr[i], ans, ds);
        ds.pop_back();
    }
}
vector<vector<int>> combinationSum2(vector<int> &arr, int target)
{
    sort(arr.begin(), arr.end());
    vector<vector<int>> ans;
    vector<int> ds;
    helper(0, arr, target, ans, ds);
    return ans;
}