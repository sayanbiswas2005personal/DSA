def is_palindrome_num(x):
    if x < 0:
        return False

    rev = 0
    original = x

    while x != 0:
        digit = x % 10
        rev = rev * 10 + digit
        x //= 10

    return rev == original
