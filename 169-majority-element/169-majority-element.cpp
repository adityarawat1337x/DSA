class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int maj=nums[0],freq=0;
        for(auto i:nums){
            if(i!=maj){
                freq--;
            }else{
                freq++;
            }
            if(freq==0){
                maj=i;
                freq=1;
            }
        }
        
        return maj;
    }
};