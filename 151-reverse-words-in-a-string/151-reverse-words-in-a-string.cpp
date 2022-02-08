class Solution {
public:
    vector<string> parse(string s) {
        vector<string> v;
        int i = 0, j = 0;
        while(j < s.length()) {
            while(i < s.length() and s[i] == ' ') i++;
            j = i;
            if(i == s.length()) break;
            
            while(j < s.length() and s[j] != ' ') j++;
            v.push_back(s.substr(i,j-i));
            i = j;
        }
        
        return v;
    }
    
    string reverseWords(string s) {
        string ans = "";
        auto v = parse(s);
        for(int i = 0; i < v.size(); i++) {
            ans += v[v.size()-1-i];
            if(i != v.size()-1) ans += " ";
        }
        
        return ans;
    }
};