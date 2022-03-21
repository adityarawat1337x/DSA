class Solution {
public:
    vector<int> partitionLabels(string s) {
        unordered_map<char,int> mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]=i;
        }

        int i=0;
        vector<int> ans;
        while(i<s.size()){
            int j = i;
            int lim = mp[s[j]];
            while(j<=lim){
                if(mp[s[j]]>lim)
                    lim=mp[s[j]];
                j++;
            }
            ans.push_back(j-i);
            i=j;
        }
        
        return ans;
    }
};