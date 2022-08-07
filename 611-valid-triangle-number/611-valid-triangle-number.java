class Solution {
    public int triangleNumber(int[] nums) {
        Arrays.sort(nums);
        int ans=0;
        for(int i=0;i<nums.length;i++)
            for(int j=i+1;j<nums.length;j++){
                int sum=nums[i]+nums[j];
                int l=j+1,r=nums.length-1;
                while(l<=r){
                    int m=(l+r)/2;
                    if(nums[m]>=sum){
                        r=m-1;
                    }else l=m+1;
                }
                ans+=(l-j-1);
            }
        
        return ans;
    }
}