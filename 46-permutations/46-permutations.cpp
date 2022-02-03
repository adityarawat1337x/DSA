class Solution {
public:
    
    void solve(vector<int>& nums,vector<vector<int>> &ans,vector<int> &tmp){
        if(tmp.size()==nums.size()){
            ans.push_back(tmp);
            return;
        }
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]>-11){
                tmp.push_back(nums[i]);
                int x = nums[i];
                nums[i]=-12;
                solve(nums,ans,tmp);
                nums[i]=x;
                tmp.pop_back();
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
         vector<vector<int>> ans;
         vector<int> tmp;
        solve(nums,ans,tmp);
        return ans;
    }
};