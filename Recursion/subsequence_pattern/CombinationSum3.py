def _helper(value: int, count: int, target: int,
            result: list[list[int]], current: list[int]) -> None:
    if len(current) == count:
        if target == 0:
            result.append(current.copy())
        return
    for candidate in range(value, 10):
        if candidate > target:
            break
        current.append(candidate)
        _helper(candidate + 1, count, target - candidate, result, current)
        current.pop()


def combination_sum3(count: int, target: int) -> list[list[int]]:
    result = []
    _helper(1, count, target, result, [])
    return result
