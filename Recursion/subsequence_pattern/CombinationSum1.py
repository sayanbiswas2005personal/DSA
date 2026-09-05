def _helper(index: int, numbers: list[int], target: int,
            result: list[list[int]], current: list[int]) -> None:
    if target == 0:
        result.append(current.copy())
        return
    for next_index in range(index, len(numbers)):
        if numbers[next_index] > target:
            break
        current.append(numbers[next_index])
        _helper(next_index, numbers, target - numbers[next_index], result, current)
        current.pop()


def combination_sum(numbers: list[int], target: int) -> list[list[int]]:
    numbers.sort()
    result = []
    _helper(0, numbers, target, result, [])
    return result
