class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()==0)
            return 0;
        int ptr=1,k=1,prev=nums[0];
        for(int i=1;i<nums.size();i++){
            if(prev!=nums[i]){
                nums[ptr++]=nums[i];
                prev=nums[i];
                k++;
            }
        }
        
        return k;
    }
};