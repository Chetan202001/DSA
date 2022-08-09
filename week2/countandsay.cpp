 string countAndSay(int n) {
        if(n==1)
            return "1";
        if(n==2)
            return "11";
        string ans="11";
        for(int i=3;i<=n;i++)
        {
            string res="";
            ans=ans+'&';
            int c=1;
            for(int j=1;j<ans.length();j++)
            {
                if(ans[j]!=ans[j-1])
                {
                    res=res+to_string(c);
                    res=res+ans[j-1];
                    c=1;
                }
                else
                    c++;
                  
            }
            ans=res;
        }
        return ans;
    }