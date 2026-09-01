import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class subsequence2 {
    private void helper(int ind,int[] nums,List<List<Integer>> ans,ArrayList<Integer> ds,int n){
        ans.add(new ArrayList<>(ds));
        for(int i=ind; i<n; i++){
            if(i > ind && nums[i-1] == nums[i]) continue;
            ds.add(nums[i]);
            helper(i+1,nums,ans,ds,n);
            ds.remove(ds.size()-1);
        }
    }
    public List<List<Integer>> subsetsWithDup(int[] nums) {
        int n = nums.length;
        List<List<Integer>> ans = new ArrayList<>();
        Arrays.sort(nums);
        helper(0,nums,ans,new ArrayList<>(),n);
        return ans;
    }
}
