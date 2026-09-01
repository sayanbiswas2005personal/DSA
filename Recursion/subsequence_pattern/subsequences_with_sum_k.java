public class subsequences_with_sum_k {
    Boolean[][] dp;
    private Boolean helper(int ind,int[] arr,int target,int n){
        if(target == 0) return true; // make this at front as this might happen last element is forming the sum k and we need to return true in that case
        if(ind == n) return false;
        if(dp[ind][target] != null) return dp[ind][target];
        Boolean take = false;
        if(arr[ind] <= target){
            take = helper(ind+1,arr,target-arr[ind],n);
        }
        Boolean not_take = helper(ind+1,arr,target,n);
        return dp[ind][target] = take || not_take;
    }
    public boolean checkSubsequenceSum(int[] arr, int k) {
        int n = arr.length;
        dp = new Boolean[n][k+1];
        return helper(0,arr,k,n);
    }
}
