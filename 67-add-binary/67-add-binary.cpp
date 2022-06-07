class Solution {
public:
    string addBinary(string a, string b) {
        int carry=0;
        int i=a.size()-1,j=b.size()-1;
        string ans="";
        while(i>-1 or j>-1 or carry==1){
            int ic = i>-1?a[i]-'0':0;
            int jc = j>-1?b[j]-'0':0;
            int sm = ic+jc+carry;
            if(sm==0){
                ans.push_back('0');
                carry=0;
            }else if(sm==1){
                ans.push_back('1');
                carry=0;
            }else if(sm==2){
                ans.push_back('0');
                carry=1;
            }else{
                ans.push_back('1');
                carry=1;
            }
            i--;
            j--;
        }
        
        reverse(ans.begin(),ans.end());
        return ans;
    }
};