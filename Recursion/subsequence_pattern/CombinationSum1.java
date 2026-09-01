import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class CombinationSum1 {
    public static List<List<Integer>> combinationSum(int[] arr, int target) {
        Arrays.sort(arr);
        List<List<Integer>> ans = new ArrayList<>();
        helper(0, arr, target, ans, new ArrayList<>());
        return ans;
    }

    private static void helper(int idx, int[] arr, int target, List<List<Integer>> ans, List<Integer> ds) {
        if (target == 0) {
            ans.add(new ArrayList<>(ds));
            return;
        }

        for (int i = idx; i < arr.length; i++) {
            if (arr[i] > target) {
                break;
            }
            ds.add(arr[i]);
            helper(i, arr, target - arr[i], ans, ds);
            ds.remove(ds.size() - 1);
        }
    }
}