class Solution {
public:
    string invert(string s){
        for(auto &i:s)
            if(i=='0')
                i='1';
            else 
                i='0';
        return s;
    }
    
    string rev(string s){
        reverse(s.begin(),s.end());
        return s;
    }
    char findKthBit(int n, int k) {
        string s="0";
        for(int i=1;i<n;i++){
            s = s+'1'+rev(invert(s));
        }
        return s[k-1];
    }
};