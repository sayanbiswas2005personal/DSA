MAPPING = ["", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"]
def _helper(index: int, digits: str, result: list[str], current: list[str]) -> None:
    if index == len(digits):
        result.append("".join(current))
        return
    for letter in MAPPING[int(digits[index])]:
        current.append(letter)
        _helper(index + 1, digits, result, current)
        current.pop()
def letter_combinations(digits: str) -> list[str]:
    if not digits:
        return []
    result = []
    _helper(0, digits, result, [])
    return result
