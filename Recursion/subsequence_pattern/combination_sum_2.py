def helper(idx, arr, target, ans, ds):
    if target == 0:
        ans.append(ds.copy())
        return

    for i in range(idx, len(arr)):
        if i > idx and arr[i] == arr[i - 1]:
            continue
        if arr[i] > target:
            break
        ds.append(arr[i])
        helper(i + 1, arr, target - arr[i], ans, ds)
        ds.pop()


def combination_sum_2(arr, target):
    arr = sorted(arr)
    ans = []
    ds = []
    helper(0, arr, target, ans, ds)
    return ans
