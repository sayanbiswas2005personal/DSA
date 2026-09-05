def get_divisors(number: int) -> list[int]:
    result = []
    divisor = 1
    while divisor * divisor <= number:
        if number % divisor == 0:
            result.append(divisor)
            if divisor != number // divisor:
                result.append(number // divisor)
        divisor += 1
    result.sort()
    return result
