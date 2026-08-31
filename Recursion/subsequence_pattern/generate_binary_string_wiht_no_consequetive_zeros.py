def helper(ans, ds, n):
    if len(ds) == n:
        ans.append(ds)
        return

    ds += '1'
    helper(ans, ds, n)
    ds = ds[:-1]

    if not ds or ds[-1] == '1':
        ds += '0'
        helper(ans, ds, n)


def valid_strings(n):
    ans = []
    helper(ans, '', n)
    return ans
