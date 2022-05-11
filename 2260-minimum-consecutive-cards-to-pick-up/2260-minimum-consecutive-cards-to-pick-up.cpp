int n=1000001;
class Solution {
    private:
    vector<int> s;
    public:
    int minimumCardPickup(vector<int>& cards) {
        int ans=INT_MAX;
        s.resize(n,0);
        for(int i=0,j=0;j<cards.size();j++){
            if(s[cards[j]]){
                while(s[cards[j]]){
                    s[cards[i++]]=0;
                }
                ans=min(j-i+1,ans);
            }
            s[cards[j]]=1;
        }
        
        return ans==INT_MAX?-1:ans+1;
    }
};