class Solution {
public:
    int maxProduct(vector<int>& nums) {
        bool zer=false;
        int prod=1,ansR=INT_MIN,ansL=INT_MIN;
        for(int i=0;i<nums.size();i++){
            prod*=nums[i];
            if(prod==0){
                prod=1;
                zer=true;
                continue;
            }
            ansL = max(ansL,prod);
        }
        prod=1;
         for(int i=nums.size()-1;i>-1;i--){
            prod*=nums[i];
            if(prod==0){
                prod=1;
                zer=true;
                continue;
            }
            ansR = max(ansR,prod);
        }
        int z=0;
        if(zer)
            return max(max(ansL,ansR),0);
        return max(ansL,ansR);
    }
};