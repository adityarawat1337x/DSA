class Solution {
public:
      void itr(vector<string> &ans,string k,int x,string s){
        if(k.size()==s.size()){
            ans.push_back(k);
            return;
        }
        
        for(int i=x;i<s.size();i++){
           if(isalpha(s[i])){
               itr(ans,k+(char)tolower(s[i]),i+1,s);
               itr(ans,k+(char)toupper(s[i]),i+1,s);
           }else{
               itr(ans,k+s[i],i+1,s);
           }
        }
        
    }
    
    vector<string> letterCasePermutation(string s) {
        vector<string> ans;
        itr(ans,"",0,s);
        return ans;
    }
};