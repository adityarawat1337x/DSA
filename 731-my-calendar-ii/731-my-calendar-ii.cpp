class MyCalendarTwo {
public:
    map<int,int> mp;
    MyCalendarTwo() {
    }

    bool book(int start, int end) {
        mp[start]++;
        mp[end]--;
        int cnt=0;
        for(auto &i:mp){
            if(i.first<end){
                cnt+=i.second;
                if(cnt>=3){
                    mp[start]--;
                    mp[end]++;
                    return false;
                }
            }else break;
        }
        
        return true;
    }
};
