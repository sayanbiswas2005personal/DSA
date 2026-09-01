public class CheckArmstrong {
    public static boolean isArmstrong(int n) {
        int p = String.valueOf(n).length();
        int total = 0;
        int original = n;

        while (n != 0) {
            int digit = n % 10;
            total += Math.pow(digit, p);
            n /= 10;
        }

        return total == original;
    }
}