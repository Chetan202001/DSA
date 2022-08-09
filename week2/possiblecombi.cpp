void helper(int i,int n,vector<int>can,vector<int>&res,vector<vector<int>> &ans,int tar)
    {

        if((i>=n && tar!=0)|| n==0 || tar<0)
            return;
        if(tar==0)
        {
            ans.push_back(res);
            return ;
        }
       res.push_back(can[i]);
        helper(i,n,can,res,ans,tar-can[i]);
        res.pop_back();
        helper(i+1,n,can,res,ans,tar);
        
    }
    vector<vector<int>> combinationSum(vector<int>& can, int target) {
        vector<vector<int>>ans;
        vector<int>res;
        int n=can.size();
        helper(0,n,can,res,ans,target);
        return ans;
    }