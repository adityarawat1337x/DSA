class Solution {
    public int minSubArrayLen(int target, int[] nums) {
        int sum=0,ans=Integer.MAX_VALUE;
        for(int i=0,j=0;j<nums.length;j++){
            sum+=nums[j];                
            while(i<=j && sum>=target){
                ans=Math.min(ans,j-i+1);
                sum-=nums[i];
                i++;
            }
        }
        return ans==Integer.MAX_VALUE?0:ans;
    }
}