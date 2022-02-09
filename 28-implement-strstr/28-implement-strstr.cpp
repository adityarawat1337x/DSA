class Solution {
public:
    int strStr(string hay, string ned) {
        //abcabcd
         if(!ned.size())
            return 0;
        vector<int> lps(ned.size());
        
        for(int i=0,j=1;j<ned.size();){
            if(ned[i]==ned[j]){
                lps[j]=i+1;
                j++;
                i++;
            }else if(i==0)
                j++;
            else
                i=lps[i-1];
        }
        
        for(int i=0,j=0;j<hay.size();){
            if(ned[i]==hay[j]){
                i++;
                j++;
            }
            else if(i==0)
                j++;
            else
                i=lps[i-1];
            
            if(i>=ned.size()){
                return j-i;
            }
            
        }
        return -1;
    }
};