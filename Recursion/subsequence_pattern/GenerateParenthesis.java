import java.util.ArrayList;
import java.util.List;

public class GenerateParenthesis {
    public static List<String> generateParenthesis(int n) {
        List<String> ans = new ArrayList<>();
        helper(n, ans, "", 0, 0);
        return ans;
    }

    private static void helper(int n, List<String> ans, String ds, int open, int close) {
        if (ds.length() == 2 * n) {
            ans.add(ds);
            return;
        }

        if (open < n) {
            helper(n, ans, ds + '(', open + 1, close);
        }
        if (close < open) {
            helper(n, ans, ds + ')', open, close + 1);
        }
    }
}