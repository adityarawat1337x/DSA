class Solution {
public:
    int atMost(int k,vector<int> &nums){
        int ans=0,n=0;
        for(int i=0,j=0;j<nums.size();j++){
            if(nums[j]%2!=0)
                n++;  
            while(n>k){
                if(nums[i]%2!=0)
                    n--;
                i++;
            }
          
            ans+=j-i+1;
        }
        return ans;
    }
    
    int numberOfSubarrays(vector<int>& nums, int k) {
        return atMost(k,nums)-atMost(k-1,nums);
    }
};