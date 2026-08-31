import math


def solve(n):
    cnt = 0
    while n != 0:
        n //= 10
        cnt += 1
    return cnt


def count_digits_log(n):
    if n == 0:
        return 1
    return int(math.log10(n)) + 1
