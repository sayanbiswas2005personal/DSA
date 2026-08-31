def helper(s, low, high):
    if low > high:
        return True
    if not s[low].isalnum():
        return helper(s, low + 1, high)
    if not s[high].isalnum():
        return helper(s, low, high - 1)
    if s[low].lower() != s[high].lower():
        return False
    return helper(s, low + 1, high - 1)


def is_palindrome(s):
    return helper(s, 0, len(s) - 1)
