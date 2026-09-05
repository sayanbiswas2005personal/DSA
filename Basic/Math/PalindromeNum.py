def is_palindrome_num(number: int) -> bool:
    if number < 0:
        return False
    original = number
    reversed_number = 0
    while number != 0:
        reversed_number = reversed_number * 10 + number % 10
        number //= 10
    return reversed_number == original
