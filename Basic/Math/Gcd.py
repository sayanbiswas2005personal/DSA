def gcd(first: int, second: int) -> int:
    while first > 0 and second > 0:
        if first > second:
            first %= second
        else:
            second %= first
    return second if first == 0 else first
