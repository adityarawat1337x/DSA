class Solution {
public:
      bool bs(vector<int>& nums, int target,int l,int r) {
        
        while(l<=r){
            int m=l+(r-l)/2;
            if(nums[m]==target)
                return true;
            if(nums[m]>target)
                r=m-1;
            else l=m+1;
        }
        
        return false;
    }
    
    bool search(vector<int>& nums, int target) {
        int l=0,r=nums.size()-1;
        
        while(l<r){
            if(nums[l]>nums[l+1])
                break;
            l++;
        }
        
        return bs(nums,target,0,l) or bs(nums,target,l+1,r);
    }
};