class Solution {
public:
    string convert(string s, int row) {
        int i=0,j=0,shift=2*row-2,ctr=0;
        string ans="";
        while(ctr<s.size()){
            ans+=s[i];
            ctr++;
            if(shift==0){
                j++;
                i=j;
                continue;
            }
            i+=shift;
            if(j>0 and j<row-1 and i-2*j<s.size()){
                ans+=s[i-2*j];
                ctr++;
            }
            if(i>=s.size()){
                j++;
                i=j;
            }
        }
        
        return ans;
    }
};