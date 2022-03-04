class Solution {
public:
    int minSwaps(vector<int>& s) {
  
       int cntOnes=0,cntZero=0,ans=INT_MAX,swap=0;
        //count total ones
        for(int i=0;i<s.size();i++){
             if(s[i]==1)
                cntOnes++;
        }
        
        // for ones
        for(int i=0;i<cntOnes;i++){
            if(s[i]==0)
                swap++;
        }
        ans = min(ans,swap);
        for(int i=cntOnes;i<s.size();i++){
            if(s[i]==0)
                swap++;
            if(s[i-cntOnes]==0)
                swap--;
            ans = min(ans,swap);
        }
        
        // for zero
        cntZero=s.size()-cntOnes;
        swap=0;
         for(int i=0;i<cntZero;i++){
            if(s[i]==1)
                swap++;
        }
           ans = min(ans,swap);
        for(int i=cntZero;i<s.size();i++){
            if(s[i]==1)
                swap++;
            if(s[i-cntZero]==1)
                swap--;
            ans = min(ans,swap);
        }
        
        return ans;
    }
};