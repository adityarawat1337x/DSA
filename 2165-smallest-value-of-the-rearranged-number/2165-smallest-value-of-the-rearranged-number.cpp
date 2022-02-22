class Solution {
public:
    long long smallestNumber(long long num) {
        if(num==0)
            return num;
        bool neg=false;
        if(num<0){
            neg=true;
            num*=-1;
        }
        
        string s = to_string(num);
        
        sort(s.begin(),s.end());
        if(neg){
            reverse(s.begin(),s.end());
            cout<<s;
            return -stol(s);
        }
        
        int i=0;
        while(s[i]=='0'){
            i++;
        }
        swap(s[i],s[0]);
        return (long long)stol(s);   
    }
};