class ReverseNum {
public:
    static int reverse(int x) {
        long long reversed = 0;
        while (x != 0) {
            reversed = reversed * 10 + x % 10;
            if (reversed > 2147483647LL || reversed < -2147483648LL) return 0;
            x /= 10;
        }
        return static_cast<int>(reversed);
    }
};