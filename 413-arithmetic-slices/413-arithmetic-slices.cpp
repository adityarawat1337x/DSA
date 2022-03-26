class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        if(nums.size()<3)
            return 0;
        vector<int> diff;
        for(int i=0;i<nums.size()-1;i++){
            diff.push_back(nums[i+1]-nums[i]);
        }
        
        int ans=0,cnt=0,prev=diff[0];
        for(auto i:diff){
            if(i==prev){
                cnt++;
            }else{
                prev=i;
                ans+=(cnt*(cnt-1))/2;
                cnt=1;
            }
        }
        ans+=(cnt*(cnt-1))/2;
        return ans;
    
    }
};