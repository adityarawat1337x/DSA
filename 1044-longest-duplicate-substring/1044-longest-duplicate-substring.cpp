class Solution {

private:
    int prime = 10000007;
    vector<int> power;
    
    string roll(string s, int len) {
        if(len == 0)    return "";
        int n = s.size(), curr = 0;
        unordered_map<int, vector<int>> hash;
        
        for(int i = 0; i < len; i++) {
            curr = (curr * 26 + (s[i]-'a')) % prime;
        }
        hash[curr] = {0};  
        
        for(int i = len; i < n; i++) {
            curr = ((curr - power[len-1] * (s[i-len]-'a')) % prime + prime) % prime;
            curr = (curr * 26 + (s[i]-'a')) % prime;
            
            if(hash.find(curr) == hash.end())   hash[curr] = {i-len+1};
            else {
                for(int index: hash[curr]) {
                    if(s.substr(index, len) == s.substr(i-len+1, len))  return s.substr(index, len);
                }
                hash[curr].push_back({i-len+1});
            }
        }
        return "";    
    }
public:
  
    string longestDupSubstring(string s) {
        int l=1,r=s.size()-1;
        string ans="";
        
        power = vector<int>(s.size());
        for(int i = 0; i < s.size(); i++)  
            power[i] = (i == 0) ? 1 : (power[i-1] * 26) % prime;

        while(l<=r){
            int m = (l+r)/2;
            string res = roll(s,m);
            if((int)ans.size() < (int)res.size()) {
                ans = res;
                l = m+1;
            } else  r = m-1;
        }
        
        return ans;
    }
};

static bool     _foo = ios::sync_with_stdio(false);
static ostream* _bar = cin.tie(NULL);