def helper(idx, s, ans, ds):
    if idx == len(s):
        ans.append(ds)
        return

    ds += s[idx]
    helper(idx + 1, s, ans, ds)
    ds = ds[:-1]
    helper(idx + 1, s, ans, ds)


def power_set(s):
    ans = []
    ds = ""
    helper(0, s, ans, ds)
    ans.sort()
    return ans
