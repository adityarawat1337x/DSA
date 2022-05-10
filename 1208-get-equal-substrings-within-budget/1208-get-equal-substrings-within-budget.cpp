class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int cost=0,ans=0;
        for(int i=0,j=0;j<s.size();j++){
            cost+=abs(s[j]-t[j]);
            if(cost>maxCost){
                ans = max(ans,j-i);
                while(cost>maxCost)
                    cost-=(abs(s[i]-t[i++]));                
            }
            ans = max(ans,j-i+1);
        }
                           
        return ans;
    }
};