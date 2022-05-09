class Solution {
public:
    int minKBitFlips(vector<int>& nums, int k) {
        int ans=0;
        int flips=0;
        for(int i=0;i<nums.size();i++){
           if(nums[i]==flips%2){
               if(i>nums.size()-k) return -1;
               flips++,ans++,nums[i]-=2;
           }
           if(i>=k-1 and nums[i-k+1]<0){
                nums[i-k+1]+=2;
               flips--;
           }
        }
        return flips>0?-1:ans;
    }
};