class Solution {
public:

    bool checkPossibility(vector<int>& nums) {
        bool flag=false;
        for(int i=1;i<nums.size();i++)
            if(nums[i-1]>nums[i]){
                if(flag)
                    return false;
                if(i<2 or nums[i]>=nums[i-2])
                    nums[i-1]=nums[i];
                else
                    nums[i]=nums[i-1];
                flag=true;
            }
        
        return true;
    }
};