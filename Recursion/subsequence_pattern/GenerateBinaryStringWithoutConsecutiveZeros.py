def _helper(result: list[str], current: str, length: int) -> None:
    if len(current) == length:
        result.append(current)
        return
    _helper(result, current + "1", length)
    if not current or current[-1] == "1":
        _helper(result, current + "0", length)


def valid_strings(length: int) -> list[str]:
    result = []
    _helper(result, "", length)
    return result
