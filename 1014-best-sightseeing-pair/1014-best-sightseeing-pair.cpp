class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& val) {
        int maxi=INT_MIN,ans=INT_MIN;
        maxi=val[0]+0;
        for(int i=1;i<val.size();i++){
            if(val[i]-i+maxi > ans)
                ans = val[i]-i+maxi;
            if(val[i]+i > maxi)
                maxi=val[i]+i;
        }
        
        return ans;
    }
};
//335001