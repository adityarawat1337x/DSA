class Solution {
public:
    int ans=INT_MIN;
    int calc(vector<int>& nums,int l,int r){
       int odd=0,oddL=-1,oddR=-1;
        for(int i=l;i<r;i++){
            if(nums[i]<0){
                oddL=oddL==-1?i:oddL;
                oddR=i;
                odd++;
            }
        }
        
        if(odd&1){
            return max(r-oddL-1,oddR-l);
        }
        return r-l;
    }
    
    int getMaxLen(vector<int>& nums) {
        int i=0,j=0;
       for(;j<nums.size();j++){
           if(nums[j]==0){
               ans = max(ans,calc(nums,i,j));
               i=j+1;
           }
       }
        
     ans = max(ans,calc(nums,i,j));
        return ans;
    }
};