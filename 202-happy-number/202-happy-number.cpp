class Solution {
public:
    bool isHappy(int n) {
        unordered_map<int,bool> mp;
        
        while(n){
            mp[n]=true;
            if(n==1)
                return true;
            int tmp = 0;
            while(n){
                tmp += (n%10)*(n%10);
                n/=10;
            }
            n=tmp;
            if(mp[n])
                return false;
        }
        return false;
    }
};