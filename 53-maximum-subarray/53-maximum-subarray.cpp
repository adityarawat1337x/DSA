class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        ios_base::sync_with_stdio(0);
        cin.tie(0); cout.tie(0);
        int sum=INT_MIN,tmp=0;
        for(int i=0;i<nums.size();i++){
            tmp+=nums[i];
            if(tmp>sum){
                sum=tmp;
            }
            if(tmp<0)
                tmp=0;
        }
        
        return sum;
    }
};