def fib(number: int) -> int:
    if number == 0 or number == 1:
        return number
    return fib(number - 1) + fib(number - 2)
