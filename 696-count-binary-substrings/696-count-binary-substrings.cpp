class Solution {
public:
    int countBinarySubstrings(string s) {
        vector<int> v;
        char prev=s[0];
        int i=0,j=0;
        for(i=0,j=0;j<s.size();j++){
            if(s[j]!=prev){
                v.push_back(j-i);
                i=j;
                prev=s[j];
            }
        }
        v.push_back(j-i);
        
        int ans=0;
        for(int i=0;i<v.size()-1;i++){
            cout<<v[i]<<" ";
            ans+=min(v[i],v[i+1]);
        }
        
        return ans;
    }
};