class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int ans=0,pre=0;
        for(auto i:nums){
            pre+=i;
            if(pre<1){
                ans+=1-pre;
                pre=1;
            }
        }
        
        return ans==0?1:ans;
    }
};