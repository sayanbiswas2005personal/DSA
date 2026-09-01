import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

public class AllSubsequencesOfAString {
    public static List<String> powerSet(String s) {
        List<String> ans = new ArrayList<>();
        generate(s, 0, "", ans);
        Collections.sort(ans);
        return ans;
    }

    private static void generate(String s, int idx, String ds, List<String> ans) {
        if (idx == s.length()) {
            ans.add(ds);
            return;
        }

        generate(s, idx + 1, ds + s.charAt(idx), ans);
        generate(s, idx + 1, ds, ans);
    }
}