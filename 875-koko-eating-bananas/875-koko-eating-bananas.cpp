class Solution {
public:
    
    bool canEat(vector<int> p,int h,int k){
        int cnt=0;
        for(int i=0;i<p.size();i++){
            cnt += (p[i]/k);
            cnt += p[i]%k?1:0;
        }
        
        return cnt<=h;
    }
    
    int minEatingSpeed(vector<int>& piles, int h) {
        int l = 1,r=*max_element(piles.begin(),piles.end());

        while(l<=r){
            int m = (l + r)/2;
            if(canEat(piles,h,m)){
                r=m-1;
            }else{
                l=m+1;
            }
        }
        
        return l;
    }
};