class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        long long sum=0;
        int len = 2*k+1;
        vector<int> ans(nums.size(),-1);
        for(int i=0,j=0;j<nums.size();j++){
            sum+=nums[j];      
            if(j-i+1==len){
                ans[j-k]=sum/len;
                sum-=nums[i++];
            }
        }
        
        return ans;
    }
};