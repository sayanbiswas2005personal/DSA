def is_armstrong(n):
    p = len(str(n))
    total = 0
    original = n

    while n != 0:
        digit = n % 10
        total += digit ** p
        n //= 10

    return total == original
