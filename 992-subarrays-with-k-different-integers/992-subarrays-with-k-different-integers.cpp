class Solution {
public:
    int atMost(int k,vector<int> &nums){
        unordered_map<int,int> mp;
        int ans=0;
        for(int i=0,j=0;j<nums.size();j++){
            if(!mp[nums[j]]++)
                k--;
            while(k<0){
                if(!--mp[nums[i]])
                    k++;
                i++;
            }
            ans+=j-i+1;                
        }
        return ans;
    }
    
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return atMost(k,nums) - atMost(k-1,nums);
    }
};