class Solution {
public:
    bool check(string &s){
        for(int i=0,j=s.size()-1;i<j;i++,j--){
            if(s[i]!=s[j])
                return false;
        }
        return true;
    }
    void solve(vector<vector<string>> &ans,string &s,int idx,vector<string> v){
        if(idx>=s.size()){
            ans.push_back(v);
            return;
        }
        string tmp="";
        for(int i=idx;i<s.size();i++){
            tmp+=s[i];
            if(check(tmp)){
                v.push_back(tmp);
                solve(ans,s,i+1,v);
                v.pop_back();
            }
        }
        
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> v;
        solve(ans,s,0,v);
        return ans;
    }
};