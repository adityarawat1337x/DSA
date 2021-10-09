class Solution {
public:
    int itr(vector<int>& nums, int &target,int n,int curr,map<vector<int>,int> &m) {
        if(m.find({n,curr})!=m.end())
            return m[{n,curr}];
        
        if(target==curr && n==nums.size()){
            return 1;
        }
        if(n==nums.size()){
            return 0;
        }
        
       int neg = itr(nums,target,n+1,curr-nums[n],m);
       int pos  = itr(nums,target,n+1,curr+nums[n],m);
        return m[{n,curr}] = pos+neg;
    }
    
    int findTargetSumWays(vector<int>& nums, int target) {
        map<vector<int>,int> m;
        itr(nums,target,0,0,m);
        return m[{0,0}];
    }
};