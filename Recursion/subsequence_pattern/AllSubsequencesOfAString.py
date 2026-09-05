def _generate(text: str, index: int, current: str, result: list[str]) -> None:
    if index == len(text):
        result.append(current)
        return
    _generate(text, index + 1, current + text[index], result)
    _generate(text, index + 1, current, result)


def power_set(text: str) -> list[str]:
    result = []
    _generate(text, 0, "", result)
    result.sort()
    return result
