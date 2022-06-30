class Solution {
public:
    int minMoves2(vector<int>& nums) {
         if(nums.size()<=1)
            return 0;
        sort(nums.begin(),nums.end());
        int median,mid = (nums.size()-1)/2;
        if(nums.size()%2==0){
           median = (nums[mid]+nums[mid+1])/2;
        }else{
            median = (nums[mid]);
        }
        int ans=0;
        for(auto i:nums){
            ans+=abs(median-i);
        }
        return ans;
    }
};