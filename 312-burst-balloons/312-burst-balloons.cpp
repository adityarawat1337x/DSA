class Solution {
public:
    int recur(vector<int>& nums,int i,int j,vector<vector<int>> &memo){
        if(j<=i)
            return 0;
        if(memo[i][j]!=-1)
            return memo[i][j];
        
        int ans=INT_MIN;
        for(int choose=i;choose<j;choose++){
            int l=i==0?1:nums[i-1],r=j==nums.size()?1:nums[j];
            int points = l*nums[choose]*r + recur(nums,i,choose,memo)+recur(nums,choose+1,j,memo);
            ans=max(ans,points);
        }
        
        return memo[i][j] =ans;
    }
    
    int maxCoins(vector<int>& nums) {
        vector<vector<int>> memo(nums.size(),vector<int>(nums.size()+1,-1));
        return recur(nums,0,nums.size(),memo);
    }
};