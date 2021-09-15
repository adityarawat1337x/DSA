class Solution {
public:
    int hammingDistance(int x, int y) {
        x = x^y;
        y=0;
        int ans=0;
        while(y<32){
            ans +=(x&(1<<y++))?1:0;
        }
        
        return ans;
    }
};