def reverse(number: int) -> int:
    reversed_number = 0
    while number != 0:
        reversed_number = reversed_number * 10 + number % 10
        number //= 10
    return reversed_number
