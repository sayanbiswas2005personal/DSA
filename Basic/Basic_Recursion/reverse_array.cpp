#include <iostream>
using namespace std;
void helper(vector<int> &arr, int low, int high)
{
    if (low >= high)
    {
        return;
    }
    swap(arr[low], arr[high]);
    helper(arr, low + 1, high - 1);
}
void reverseArray(vector<int> &arr)
{
    helper(arr, 0, arr.size() - 1);
}