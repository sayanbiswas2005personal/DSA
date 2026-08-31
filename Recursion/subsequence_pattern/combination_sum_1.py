def helper(ind, arr, target, ans, ds):
    if target == 0:
        ans.append(ds.copy())
        return

    for i in range(ind, len(arr)):
        if target < arr[i]:
            break
        ds.append(arr[i])
        helper(i, arr, target - arr[i], ans, ds)
        ds.pop()


def combination_sum(arr, target):
    arr = sorted(arr)
    ans = []
    ds = []
    helper(0, arr, target, ans, ds)
    return ans
