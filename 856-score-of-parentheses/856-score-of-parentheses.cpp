class Solution {
public:
    int score(string s){
        if(s=="()")
            return 1;
        int ans=  2*scoreOfParentheses(s.substr(1,s.size()-2));
        return ans;
    }
    int scoreOfParentheses(string s){                      
        int balance=0,i=0,ans=0;
        
        for(int j=0;j<s.size();j++){
            if(s[j]=='(')
                balance++;
            else balance--;
            
            if(balance==0){
                ans += score(s.substr(i,j-i+1));
                i=j+1;
            }
            
        }
        return ans;
    }
};