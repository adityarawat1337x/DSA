class Solution {
public:
    string fractionToDecimal(long long num, long long den) {
        long long sign=1;
        if(num<0)
            sign*=-1;
        if(den<0)
            sign*=-1;
        num=abs(num);
        den=abs(den);
        long long rem = 1;
        unordered_map<long long,int> mp;
        string  ans="";
        long long q = num/den;
        ans+=to_string(q);
        rem = num%den;
        num=rem*10;
        if(rem)
            ans+='.';
        string tmp="";
        long long i=0;
        while(rem){
            if(mp.find(rem)!=mp.end()){
                tmp.insert(mp[rem],"(");
                tmp+=')';
                break;
            }
            mp[rem]=i++;
            q = num/den;
            tmp+=to_string(q);
            rem = num%den;
            num=rem*10;
        }
        if(sign==-1 and (ans!="0" or tmp!=""))
            ans.insert(0,"-");
        return ans+tmp;
    }
};