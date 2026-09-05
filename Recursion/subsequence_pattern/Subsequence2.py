def _helper(index: int, numbers: list[int], result: list[list[int]], current: list[int]) -> None:
    result.append(current.copy())
    for next_index in range(index, len(numbers)):
        if next_index > index and numbers[next_index - 1] == numbers[next_index]:
            continue
        current.append(numbers[next_index])
        _helper(next_index + 1, numbers, result, current)
        current.pop()


def subsets_with_dup(numbers: list[int]) -> list[list[int]]:
    numbers.sort()
    result = []
    _helper(0, numbers, result, [])
    return result
