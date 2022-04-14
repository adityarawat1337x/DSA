class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        set<vector<int>> s;
        vector<vector<int>> v;
        sort(nums.begin(),nums.end());
        
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                for(int k=j+1;k<nums.size();k++){
                    int val = (long long)target- (long long)nums[i]- (long long)nums[j]- (long long)nums[k];
                    if(mp.find(val)!=mp.end()){
                        vector<int> tmp;
                        tmp.push_back(nums[i]);
                        tmp.push_back(nums[j]);
                        tmp.push_back(nums[k]);
                        tmp.push_back(val);
                        s.insert(tmp);
                    }
                }
            } 
            mp[nums[i]]++;
        }
        
        for(auto i:s)
            v.push_back(i);
        
        return v;
    }
};