  #include<bits/stdc++.h>
  using namespace std;
  int myAtoi(string s) {
        int i=0,f=1;
        long res=0;
        while(s[i]==' ')
        {
            i++;
        }
        if(s[i]=='-')
        {
            f=0;
            i++;
        }
      else  if(s[i]=='+')
        {   f=1;
            i++;
        }
            while(s[i]>='0' && s[i]<='9')
            {
                if(res>INT_MAX)
                    break;
                res=(res*10) + (s[i]-'0');
                i++;
            }
        if(f==0)
            res*=-1;
        if(res>INT_MAX)
            return INT_MAX;
        if(res<INT_MIN)
            return INT_MIN;
        return res; 
        
                
    }
    int main()
    {
        string s;
        cin>>s;
        cout<<myatoi(s);
        return 0;
    }