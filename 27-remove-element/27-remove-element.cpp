class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k=0;
        for(int j=nums.size()-1,i=0;i<=j;i++){
            if(nums[i]!=val)
                k++;
            if(nums[i]==val){
                swap(nums[i--],nums[j--]);
            }
        }
        
        return k;
    }
};