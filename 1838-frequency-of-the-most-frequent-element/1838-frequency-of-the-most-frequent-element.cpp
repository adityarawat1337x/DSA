class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        int ans=1,cnt=k;
        sort(nums.begin(),nums.end());
        for(int i=nums.size()-1,j=nums.size()-2;j>-1;j--){
            while(i>j and  nums[i]-nums[j]>cnt){
                cnt+=(nums[i]-nums[i-1])*(i-j-1);
                i--;
            }
            if(nums[i]-nums[j]<=cnt){
                cnt-=(nums[i]-nums[j]);
            }
            if(cnt>=0)
                ans=max(ans,i-j+1);
        }
        
        return ans;
    }
};