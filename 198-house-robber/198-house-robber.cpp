class Solution {
public:
    int rob(vector<int>& nums) {
        int n  = nums.size();
        int prev=nums[0],prev2=0;
        
        for(int i=1;i<n;i++){
            int nt = prev;
            int t = (i>1)?prev2:0;
            t+=nums[i];
            prev2=prev;
            prev = max(t,nt);
        }
        
        return prev;
    }
};