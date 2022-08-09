 bool helper(string w1,vector<int>f)
    {
        for(char i:w1)
        {
            if(f[i-'a']!=0)
            f[i-'a']--;
        }
        for(int i=0;i<26;i++)
        {
            if(f[i]>0)
                return false;
        }
        return true;
    }
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        vector<int>freq(26,0);
        for(string i: words2)
        {
            vector<int>t(26,0);
            for(char j:i)
            {
            t[j-'a']++;
            freq[j-'a']=max(freq[j-'a'],t[j-'a']);
            }
        }
        vector<string>ans;
        for(string i:words1)
        {
            if(helper(i,freq))
                ans.push_back(i);
        }
        return ans;
    }