import java.util.ArrayList;
import java.util.List;

public class subsequences {
    // type 1 for the same problem
    private void helper(int ind,int[] nums,List<List<Integer>> ans,ArrayList<Integer> ds,int n){
        ans.add(new ArrayList<>(ds));
        for(int i=ind; i<n; i++){
            ds.add(nums[i]);
            helper(i+1,nums,ans,ds,n);
            ds.remove(ds.size()-1);
        }
    }
    public List<List<Integer>> subsets(int[] nums) {
        int n = nums.length;
        List<List<Integer>> ans = new ArrayList<>();
        ArrayList<Integer> ds = new ArrayList<>();
        helper(0,nums,ans,ds,n);
        return ans;
    }
    // type 2 for the same problem
    private void helper1(int idx,int[] nums,List<List<Integer>> ans,List<Integer> ds){
        if(idx == nums.length){
            ans.add(new ArrayList<>(ds));
            return;
        }
        ds.add(nums[idx]);
        helper1(idx+1,nums,ans,ds);
        ds.remove(ds.size()-1);
        helper1(idx+1,nums,ans,ds);
    }
    public List<List<Integer>> subsets1(int[] nums) {
        List<List<Integer>> ans = new ArrayList<>();
        List<Integer> ds = new ArrayList<>();
        helper1(0,nums,ans,ds);
        return ans;
    }
}
