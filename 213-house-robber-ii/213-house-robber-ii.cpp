class Solution {
public:
     int rob(vector<int>& nums,int k) {
        int n  = nums.size();
        int prev=nums[1],prev2=0;
        
        for(int i=2;i<n;i++){
            int nt = prev;
            int t = prev2+nums[i];
            prev2=prev;
            prev = max(t,nt);
        }
        
        return prev;
    }
    int rob(vector<int>& nums) {
        if(nums.size()==1)
            return nums[0];
        int ans = rob(nums,1);
        int n  = nums.size();
        int prev=nums[0],prev2=0;
        
        for(int i=1;i<n-1;i++){
            int nt = prev;
            int t = prev2+nums[i];
            prev2=prev;
            prev = max(t,nt);
        }
        
        return max(prev,ans);
    }
};