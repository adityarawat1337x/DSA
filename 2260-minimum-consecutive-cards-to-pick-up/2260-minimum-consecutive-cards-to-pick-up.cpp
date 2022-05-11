class Solution {
public:
    int minimumCardPickup(vector<int>& cards) {
        set<int> s;
        int ans=INT_MAX;
        for(int i=0,j=0;j<cards.size();j++){
            if(s.count(cards[j])){
                while(s.count(cards[j])){
                    s.erase(cards[i]);
                    i++;
                }
                ans=min(j-i+1,ans);
            }
            s.insert(cards[j]);
        }
        
        return ans==INT_MAX?-1:ans+1;
    }
};