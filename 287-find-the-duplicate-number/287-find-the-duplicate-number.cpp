class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int XOR=0,n=nums.size(),i=0;
        while(i<n){
            if(nums[i]==nums[nums[i]-1])
                i++;
            else
                swap(nums[i],nums[nums[i]-1]);
        }
        
        i=0;
         while(i<n){
            if(nums[i]!=i+1)
                  return nums[i];
            i++;
         }
        return 0;
        
    }
};