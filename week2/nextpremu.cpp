 void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        int idx=-1,idx2=0;
        for(int i=n-2;i>=0;i--)
        {
            if(nums[i]<nums[i+1])
            {
                idx=i;
                break;
            }
        }
        if(idx<0)
            reverse(nums.begin(),nums.end());
        else
        {
        for(int i=n-1;i>=0;i--)
        {
            if(nums[i]>nums[idx])
            {
                idx2=i;
                break;
            }
        }
        
        swap(nums[idx],nums[idx2]);
        sort(nums.begin()+idx+1,nums.end());
        }
    }