class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {
        deque<int> mini,maxi;
        int ans=nums[0]<limit?1:0;
        int i=0,j=0;
        
        for(i=0;i<nums.size();i++){
            
            while(mini.size() and mini.back()>nums[i])
                mini.pop_back();
            
            mini.push_back(nums[i]);
            
            while(maxi.size() and maxi.back()<nums[i])
                maxi.pop_back();
            
            maxi.push_back(nums[i]);
            
            if(maxi.front()-mini.front()>limit){
                if(nums[j]==mini.front())
                    mini.pop_front();
                if(nums[j]==maxi.front())
                    maxi.pop_front();
                j++;
            }
        }
        
        return i-j;
    }
};