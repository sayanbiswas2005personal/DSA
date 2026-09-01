import java.util.ArrayList;
import java.util.List;

public class combination_sum_3 {
    private void helper(int ind,int k,int target,int[] seq,List<List<Integer>> ans,ArrayList<Integer> ds){
        if(ds.size() == k){
            if(target == 0){
                ans.add(new ArrayList<>(ds));
                return;
            }
        }
        for(int i=ind; i<seq.length; i++){
            if(seq[i] > target) break;
            ds.add(seq[i]);
            helper(i+1,k,target - seq[i],seq,ans,ds);
            ds.remove(ds.size()-1);
        }
    }
    public List<List<Integer>> combinationSum3(int k, int n) {
        int[] seq = {1,2,3,4,5,6,7,8,9};
        List<List<Integer>> ans = new ArrayList<>();
        helper(0,k,n,seq,ans,new ArrayList<>());
        return ans;
    }
}
