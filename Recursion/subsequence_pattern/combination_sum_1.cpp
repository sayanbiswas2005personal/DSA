#include <iostream>
using namespace std;
void helper(int ind, vector<int> &arr, int target, vector<vector<int>> &ans, vector<int> &ds)
{
    if (target == 0)
    {
        ans.push_back(ds);
        return;
    }
    for (int i = ind; i < arr.size(); i++)
    {
        if (target < arr[i])
            break; // as the array is sorted so the next number might be bigger than this
        ds.push_back(arr[i]);
        helper(i, arr, target - arr[i], ans, ds);
        ds.pop_back();
    }
}
vector<vector<int>> combinationSum(vector<int> &arr, int target)
{
    sort(arr.begin(), arr.end());
    vector<vector<int>> ans;
    vector<int> ds;
    helper(0, arr, target, ans, ds);
    return ans;
}