 vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mp;
        int s2,j=0,i,x;
        vector<int> a;
        for(i=0;i<nums.size();i++)
        {
          if(mp.find(target-nums[i])!=mp.end())
          {
              a.push_back(mp[target-nums[i]]);
              a.push_back(i);
              return a;
          }
            mp[nums[i]]=i;
        }
        return {};
    }