#include <vector>
#include <algorithm>

class ReverseArray {
public:
    static void reverseArray(std::vector<int>& arr) {
        std::reverse(arr.begin(), arr.end());
    }
};