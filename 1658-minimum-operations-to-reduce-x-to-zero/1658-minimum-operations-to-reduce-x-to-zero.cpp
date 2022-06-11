class Solution {
public:
    int longest(vector<int>& nums, int x){
        if(x==0)
            return nums.size();
        int sum=0,ans=-1;
        for(int i=0,j=0;j<nums.size();j++){
            sum+=nums[j];
            while(i<j and sum>x){
                sum-=nums[i++];    
            }
            if(sum==x){
                ans=max(j-i+1,ans);
            }
        }
        return ans==-1?ans:nums.size()-ans;
    }
    
    int minOperations(vector<int>& nums, int x) {
        int sum = accumulate(nums.begin(),nums.end(),0);
        int find = sum-x;
        return longest(nums,find);
    }
};