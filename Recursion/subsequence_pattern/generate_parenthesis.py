def helper(n, ans, ds, start, end):
    if len(ds) == 2 * n:
        ans.append(ds)
        return

    if start < n:
        ds += '('
        helper(n, ans, ds, start + 1, end)
        ds = ds[:-1]

    if end < start:
        ds += ')'
        helper(n, ans, ds, start, end + 1)
        ds = ds[:-1]


def generate_parenthesis(n):
    ans = []
    helper(n, ans, '', 0, 0)
    return ans
