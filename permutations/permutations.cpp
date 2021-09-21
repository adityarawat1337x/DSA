class Solution {
public:
    
    void itr(vector<vector<int>> &ans,int x,vector<int>& v,int n,vector<int> nums,map<int,bool> mp){
        if(v.size()==n){
            ans.push_back(v);
            return;
        }
        
        for(int i=0;i<nums.size();i++){
            if(!mp[i]){
                v.push_back(nums[i]);
                mp[i]=true;
                itr(ans,i,v,nums.size(),nums,mp);
                v.pop_back();
                mp[i]=false;
            }
        }
        
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> v;
        map<int,bool> mp;
        itr(ans,-1,v,nums.size(),nums,mp);
        return ans;
    }
};