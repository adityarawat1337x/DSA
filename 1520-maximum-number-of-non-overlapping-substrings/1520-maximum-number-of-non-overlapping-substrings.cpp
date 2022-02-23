class Solution {
public:
    vector<string> maxNumOfSubstrings(string s) {
        vector<pair<int,int>> range(26,{-1,INT_MAX});
        vector<string> ans;
        
        //calculate range
        for(int i=0;i<s.size();i++){
            range[s[i]-'a'].second = min(range[s[i]-'a'].second,i);
            range[s[i]-'a'].first = max(range[s[i]-'a'].first,i);
        }
        
        //extend ranges
        vector<pair<int,int>> tmp;
         for(int i=0;i<26;i++){
            if(range[i].second>=s.size())
                 continue;
            int st=range[i].second,e=range[i].first;
             for(int j=st;j<=e;j++){
                 st=min(range[s[j]-'a'].second,st);
                 e=max(range[s[j]-'a'].first,e);
             }
             if(st==range[i].second)
                 tmp.push_back({e,st});
        }
        //sort ranges
        sort(tmp.begin(),tmp.end());
        
        int prev=-1;
        for(auto x:tmp){
            if(prev < x.second){
                ans.push_back(s.substr(x.second,x.first-x.second+1));
                prev=x.first;
            }
        }
    
        return ans;
    }
};