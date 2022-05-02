class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        vector<string> ans;
        unordered_map<string,int> st;
        string tmp="";
        for(int i=0,j=0;j<s.size();){
            tmp+=s[j];
            if(j-i+1==10){
                if(st[tmp]==1){
                    ans.push_back(tmp);
                    st[tmp]++;
                }
                else st[tmp]++;
            }
            j++;
            if(j-i+1>10){
                tmp.erase(0,1);
                i++;
            }
        }
        
        return ans;
    }
};