class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int> nums1=nums;
        int l=0,r=-1;
        sort(nums1.begin(),nums1.end());
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=nums1[i]){
                l=i;
                break;
            }
        }
         for(int i=nums.size()-1;i>-1;i--){
            if(nums[i]!=nums1[i]){
                r=i;
                break;
            }
        }
        return r-l+1;
        
    }
};