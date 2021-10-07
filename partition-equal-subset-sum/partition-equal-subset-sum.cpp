class Solution {
public:
    vector<vector<int>> v{201,vector<int>(20000,-1)};
    
    bool itr(vector<int>& nums,int target,int n){
        if(target==0)
            return true;
        if(n<0 || target<0)
            return false;
        if(v[n][target]!=-1){
            return v[n][target];
        }
        if(nums[n]<=target){
            return v[n][target] = itr(nums,target-nums[n],n-1) || itr(nums,target,n-1);
        }else{
            return v[n][target] = itr(nums,target,n-1);
        }
    }
    
    bool canPartition(vector<int>& nums) {
        
        int sum=0;
        sort(nums.begin(),nums.end());
        for(auto i:nums)
            sum+=i;
        if(sum&1)
            return false;
        sum = sum/2;
        return itr(nums,sum,nums.size()-1);
    }
};