class Solution {
public:
    bool hasAllCodes(string s, int k) {
        // bits at each place 2^k-1
       unordered_set<string> st;
        string tmp="";
        for(int i=0,j=0;j<s.size();j++){
            tmp+=s[j];
            if(j-i+1==k){
                st.insert(tmp);
                tmp = tmp.substr(1);
                i++;
            }
        }
      
        return st.size()>=(1<<k) ;
    }
};