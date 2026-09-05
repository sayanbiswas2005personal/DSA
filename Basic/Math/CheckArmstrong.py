def is_armstrong(number: int) -> bool:
    power = len(str(number))
    original = number
    total = 0
    while number != 0:
        total += (number % 10) ** power
        number //= 10
    return total == original
