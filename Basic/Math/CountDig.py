import math


def solve(number: int) -> int:
    count = 0
    while number != 0:
        number //= 10
        count += 1
    return count


def count_digits_log(number: int) -> int:
    if number == 0:
        return 1
    return int(math.log10(number) + 1)
