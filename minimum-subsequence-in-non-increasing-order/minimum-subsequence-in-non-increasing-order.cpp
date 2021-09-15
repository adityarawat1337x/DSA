class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        sort(nums.begin(),nums.end(),greater<int>());
        int sum=0;
        for(auto i :nums)
            sum+=i;
        vector<int> tmp;
        int tmpsum=0;
        for(int i=0;i<nums.size();i++){
            tmpsum+=nums[i];
            tmp.push_back(nums[i]);
            if(tmpsum>sum-tmpsum){
                break;
            }
        }
        return tmp;
    }
};