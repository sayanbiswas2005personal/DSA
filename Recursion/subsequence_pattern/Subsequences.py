def _helper(index: int, numbers: list[int], result: list[list[int]], current: list[int]) -> None:
    result.append(current.copy())
    for next_index in range(index, len(numbers)):
        current.append(numbers[next_index])
        _helper(next_index + 1, numbers, result, current)
        current.pop()


def _helper1(index: int, numbers: list[int], result: list[list[int]], current: list[int]) -> None:
    if index == len(numbers):
        result.append(current.copy())
        return
    current.append(numbers[index])
    _helper1(index + 1, numbers, result, current)
    current.pop()
    _helper1(index + 1, numbers, result, current)


def subsets(numbers: list[int]) -> list[list[int]]:
    result = []
    _helper(0, numbers, result, [])
    return result


def subsets1(numbers: list[int]) -> list[list[int]]:
    result = []
    _helper1(0, numbers, result, [])
    return result
