def checkSubsequenceSum(self, arr, k):
        dp = [False] * (k+1)
        dp[0] = True
        for num in arr:
            for target in range(k,num-1,-1):
                if dp[target - num]:
                    dp[target] = True
            if dp[k]:
                return True
        return dp[k]