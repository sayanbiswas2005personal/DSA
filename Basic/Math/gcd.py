def gcd(a, b):
    while a > 0 and b > 0:
        if a > b:
            a %= b
        else:
            b %= a

    if a == 0:
        return b
    return a
