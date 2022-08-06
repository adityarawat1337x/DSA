class Solution {
public:
    int poorPigs(int buckets, int minutesToDie, int minutesToTest) {
        long long ans=0,test = minutesToTest/minutesToDie;
        
        while(pow(test+1,ans)<buckets)
            ans++;
        
        return ans;
    }
};