class Solution {
public:
    int minKBitFlips(vector<int>& nums, int k) {
        int ans=0;
        queue<int> flips;
        for(int i=0;i<nums.size();i++){
           if(nums[i]!=(flips.size()%2==0?1:0)){
               flips.push(i+k-1);
               ans++;
           } 
           if(!flips.empty() and flips.front()<=i)
              flips.pop();
        }
        return flips.size()?-1:ans;
    }
};