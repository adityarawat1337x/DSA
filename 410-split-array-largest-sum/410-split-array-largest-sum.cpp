class Solution {
public:
    bool possible(int val,vector<int>& nums, int m){
        int sum=0,n=nums.size(),par=1;
        
        for(int j=0;j<n;j++){
            if(val<nums[j])
                return false;
            sum+=nums[j];
            if(sum>val){
                sum=nums[j];
                par++;
            }
        }
        
        return par<=m;
    }
    
    int splitArray(vector<int>& nums, int m) {
        int  low = *max_element(nums.begin(),nums.end());
        int high = accumulate(nums.begin(),nums.end(),0);
        int ans=low;
        while(low<=high){
            int mid = low + (high-low)/2;
            if(possible(mid,nums,m)){
                ans=mid;
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        
        return ans;
    }
};