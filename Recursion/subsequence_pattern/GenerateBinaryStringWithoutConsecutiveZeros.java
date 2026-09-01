import java.util.ArrayList;
import java.util.List;

public class GenerateBinaryStringWithoutConsecutiveZeros {
    public static List<String> validStrings(int n) {
        List<String> ans = new ArrayList<>();
        helper(ans, "", n);
        return ans;
    }

    private static void helper(List<String> ans, String ds, int n) {
        if (ds.length() == n) {
            ans.add(ds);
            return;
        }

        helper(ans, ds + '1', n);
        if (ds.isEmpty() || ds.charAt(ds.length() - 1) == '1') {
            helper(ans, ds + '0', n);
        }
    }
}