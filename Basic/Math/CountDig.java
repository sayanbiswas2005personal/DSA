
public class CountDig {
    public static int solve(int n) {
        int cnt = 0;
        while (n != 0) {
            n /= 10;
            cnt++;
        }
        return cnt;
    }

    public static int countDigitsLog(int n) {
        if (n == 0) {
            return 1;
        }
        return (int) (Math.log10(n) + 1);
    }
}