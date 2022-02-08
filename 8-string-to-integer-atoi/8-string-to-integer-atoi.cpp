class Solution {
public:
    int myAtoi(string s) {
        int left=0,right=0;
        bool neg=false;
        while(left<s.size() and (s[left]==' '))
            left++;
        
        if(s[left]=='+' or s[left]=='-'){
            if(s[left]=='-')
                neg=true;
            left++;
        }
        
        right = left;
        while(right<s.size() and s[right]>='0' and s[right]<='9')
            right++;
        
        string number = s.substr(left,right-left);
        long ans=0;
        left=0;
        while(left<number.size()){
            ans*=10;
            ans+=(number[left]-'0');
            if(ans>INT_MAX){
                return neg?INT_MIN:INT_MAX;
            }
            left++;
        }
        
        return neg?-ans:ans;
    }
};