class Solution {
public:
    int minFlipsMonoIncr(string s) {
        int cntOnes=0,cntZeros=0;
        
         for(int i=0;i<s.size();i++){
           
             if(s[i]=='0')
                cntZeros = min(1+cntZeros,cntOnes);
             else
                cntOnes++;
             
        }
        return cntZeros;
    }
};