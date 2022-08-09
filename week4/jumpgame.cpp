int jump(vector<int>& nums) {
        
        int c=0,m=0,j=0,i;
        for(i=0;i<nums.size()-1;i++)
        {
            if(m<nums[i]+i)
            {
                m=nums[i]+i;
            }
            if(c==i)
            {
                j++;
                c=m;
        }
        }
        return j;
    }