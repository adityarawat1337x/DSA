class Solution {
public:
    int minSwaps(string s) {
        int open=0,close=0,last=s.size()-1,ans=0;
        while(last>-1){
            if(s[last]=='[')
                break;
            last--;
        }
        for(int i=0;i<s.size();i++){
            if(s[i]=='['){
                open++;
            }else{
                close++;
            }
            if(close>open){
                ans++;
                swap(s[i],s[last]);
                close--;
                open++;
                while(last>-1){
                    if(s[last]=='[')
                        break;
                    last--;
                }
            }
        }
        
        return ans;
    }
};