class Solution {
public:
    bool check(vector<int> &nums){
        for(int i=0;i<nums.size()-1;i++)
            if(nums[i]>nums[i+1])
               return false;
        return true;
    }
    bool checkPossibility(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            int tmp=nums[i];
            nums[i]=i>0?nums[i-1]:INT_MIN;
            if(check(nums))
                return true;
            nums[i]=tmp;
        }
        return false;
    }
};