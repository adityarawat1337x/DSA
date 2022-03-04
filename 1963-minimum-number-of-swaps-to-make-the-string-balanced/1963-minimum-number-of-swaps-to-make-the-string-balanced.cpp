class Solution {
public:
    int minSwaps(string s) {
        int open=0,close=0,unbalanced=0;
       
        for(int i=0;i<s.size();i++){
            if(s[i]=='['){
                unbalanced++;
            }else{
                if(unbalanced>0)
                    unbalanced--;
            }
           
        }
        
        return (unbalanced+1)/2;
    }
};