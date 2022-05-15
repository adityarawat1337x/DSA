class Solution {
public:
    int maxScore(vector<int>& nums, int k) {
        k = nums.size()-k;
        int miniSum,sum=0,total =
        accumulate(nums.begin(),nums.end(),0);
        miniSum=INT_MAX;
        for(int i=0,j=0;j<nums.size();j++){
            sum+=nums[j];
            if(j-i+1==k){
                miniSum=min(miniSum,sum);
                sum-=nums[i++];
            }
        }
        
        return total - (miniSum==INT_MAX?0:miniSum);
    }
};