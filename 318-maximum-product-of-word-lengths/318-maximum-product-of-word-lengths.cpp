class Solution {
public:
    int maxProduct(vector<string>& words) {
        int ans=0;
        vector<int> masks;
        for(int i=0;i<words.size();i++){
            int mask = 0;
            for(auto c:words[i]){
                mask|=(1<<(c-'a'));
            }
            masks.push_back(mask);
        }
        for(int i=0;i<words.size();i++){
            for(int j=i+1;j<words.size();j++){
                if((masks[i]&masks[j])==0){
                    ans = max((int)words[i].size()*(int)words[j].size(),ans);
                }
            }
        }
        
        return ans;
    }
};