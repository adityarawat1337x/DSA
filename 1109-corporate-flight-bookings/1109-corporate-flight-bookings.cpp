class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        vector<int> ans(n,0);
        for(auto i:bookings){
            int st = i[0]-1;
            int en = i[1];
            int val = i[2];
            ans[st]+=val;
            if(en<n)
                ans[en]-=val;
        }
        for(int i=1;i<n;i++){
            ans[i]+=ans[i-1];
        }
        
        return ans;
    }
};