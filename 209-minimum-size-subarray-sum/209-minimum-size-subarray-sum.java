class Solution {
    public int minSubArrayLen(int target, int[] nums) {
        int l=0,r=nums.length;
        while(l<=r){
            int m = (l+r)/2,sum=0,ans=-1;
            
            for(int i=0;i<nums.length;i++){
                sum+=nums[i];
                if(i>=m)
                    sum-=nums[i-m];
                ans=Math.max(ans,sum);
            }
            
            if(ans>=target){
                r=m-1;
            }else{
                l=m+1;
            }
        }
        return l>nums.length?0:l;
    }
}