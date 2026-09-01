import java.util.ArrayList;
import java.util.Collections;

public class AllDivisorsOfANum {
    public static int[] getDivisors(int n) {
        ArrayList<Integer> ans = new ArrayList<>();

        for (int i = 1; i * i <= n; i++) {
            if (n % i == 0) {
                ans.add(i);
                if (i != n / i) {
                    ans.add(n / i);
                }
            }
        }

        Collections.sort(ans);
        int[] res = new int[ans.size()];
        for (int i = 0; i < ans.size(); i++) {
            res[i] = ans.get(i);
        }
        return res;
    }
}