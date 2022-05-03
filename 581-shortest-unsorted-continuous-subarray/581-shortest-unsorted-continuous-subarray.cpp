class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int> srt = nums;
        sort(srt.begin(),srt.end());
        int l,r;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=srt[i]){
                l=i;
                break;
            }
        }
        
        for(int i=nums.size()-1;i>-1;i--){
            if(nums[i]!=srt[i]){
                r=i;
                break;
            }
        }
        
        return r-l+1>0?r-l+1:0;
    }
};