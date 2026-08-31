def reverse(x):
    rev = 0
    while x != 0:
        digit = x % 10
        if rev > 214748364 or (rev == 214748364 and digit > 7):
            return 0
        if rev < -214748364 or (rev == -214748364 and digit < -8):
            return 0
        rev = rev * 10 + digit
        x //= 10
    return rev
