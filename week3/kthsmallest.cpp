int kthSmallest(vector<vector<int>>& m, int k) {
        int n=m.size();
        int l=m[0][0],h=m[n-1][n-1];
        while(l<h)
        {
            int mid=l+(h-l)/2;
            int c=0;
            for(int i=0;i<n;i++)
            {
                c+=upper_bound(m[i].begin(),m[i].end(),mid)-m[i].begin();
            }
            if(c<k)
                l=mid+1;
            else
                h=mid;
        }
        return l;
    }