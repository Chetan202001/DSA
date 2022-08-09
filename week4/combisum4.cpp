 int combinationSum4(vector<int>& nums, int target) {
        vector<int> dp(target+1,-1);
        return fun(dp,nums,target);
    }
    int fun(vector<int>& dp,vector<int>& nums,int target)
    {
        if(target==0)
            return 1;
        
        if(dp[target]!=-1)
            return dp[target];
        
        int t=0;
        for(auto x:nums)
        {
            if(target-x>=0)
                t+=fun(dp,nums,target-x);
        }
        return dp[target]=t;
    }