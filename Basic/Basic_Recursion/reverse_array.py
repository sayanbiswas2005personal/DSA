def helper(arr, low, high):
    if low >= high:
        return
    arr[low], arr[high] = arr[high], arr[low]
    helper(arr, low + 1, high - 1)


def reverse_array(arr):
    helper(arr, 0, len(arr) - 1)
    return arr
