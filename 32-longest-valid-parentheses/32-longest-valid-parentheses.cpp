class Solution {
public:
    int longestValidParentheses(string s) {
        int flag=0,ans=0;
        for(int j=0;j<s.size();j++){
            flag=0;
            for(int i=j;i<s.size();i++){
                if(s[i]==')' and flag>0)
                    flag--;
                else if(s[i]=='(' and flag>=0){
                    flag++;
                }else{
                    break;
                }
                ans = flag==0?max(ans,i-j+1):ans;
            }
        }
        return ans;
    }
};