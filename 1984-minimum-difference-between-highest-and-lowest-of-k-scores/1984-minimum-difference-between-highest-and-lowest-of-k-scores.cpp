class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int ans=INT_MAX;
        for(int i=0,j=0;j<nums.size();){
            if(j-i+1==k)
                ans = min(ans,nums[j]-nums[i]);
            j++;
            if(j-i+1>k)
                i++;
        }
        
        return ans;
    }
};