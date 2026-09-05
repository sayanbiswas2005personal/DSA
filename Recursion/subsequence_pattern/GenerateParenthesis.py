def _helper(pairs: int, result: list[str], current: str, opened: int, closed: int) -> None:
    if len(current) == 2 * pairs:
        result.append(current)
        return
    if opened < pairs:
        _helper(pairs, result, current + "(", opened + 1, closed)
    if closed < opened:
        _helper(pairs, result, current + ")", opened, closed + 1)


def generate_parenthesis(pairs: int) -> list[str]:
    result = []
    _helper(pairs, result, "", 0, 0)
    return result
