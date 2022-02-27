class Solution {
public:
    
    bool valid(vector<int>& time,long long total,long long k){
        long long ans=0;
        for(auto i:time){
            ans+=(k/i);
            if(ans>=total)
                return true;
        }
        return false;
    }
    long long minimumTime(vector<int>& time, int totalTrips) {
        long long l=0,r=LONG_MAX;
        
        while(l<=r){
            long long m = l+(r-l)/2;
            if(valid(time,totalTrips,m))
                r=m-1;
            else
                l=m+1;
        }
        
        return l;
    }
};