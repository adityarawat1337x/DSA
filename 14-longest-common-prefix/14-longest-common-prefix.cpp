class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
       string ans=" ";
        int len=INT_MAX;
        string check="";
        for(int i=0;i<strs.size();i++){
            if(len > strs[i].length()){
                check=strs[i];
                len=strs[i].length();
            }
        }
        for(int i=0;i<strs.size();i++){
            int j=0,k=0;
            ans="";
            if(strs[i] != check){
                  //cout<<strs[i]<<endl;
                while(k<check.length() && strs[i][j] == check[k]){
                    ans +=check[k];
                    k++;
                    j++;
                }
                check=ans;
               // cout<<check<<endl;
            }
            
            
        }
        return check;
    }
};