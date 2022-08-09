   private:
     vector<pair<int,int>>mp;
public:
    MyCalendar() {
        
    }
    
    bool book(int start, int end) {
      
        for(auto i:mp)
            if(i.first<end && i.second>start)
                return false;
        mp.push_back({start,end});
        return true;