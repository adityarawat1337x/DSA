class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int ans=0,n=nums.size(),median,mid = (n-1)/2;
        if(n<=1) return 0;
        sort(nums.begin(),nums.end());
        median = (n%2==0)?(nums[mid]+nums[mid+1])/2:(nums[mid]);
        for(int i=0;i<n/2;i++) ans+=nums[n-i-1]-nums[i];
        return ans;
    }
};
