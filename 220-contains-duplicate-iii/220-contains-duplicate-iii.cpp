class Solution {
public:
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int k, int t) {
        set<long long> s;
        for(int i=0;i<nums.size();i++){
            if(i>k)
                s.erase(nums[i-k-1]);
            auto itlow=s.lower_bound((long long)nums[i]-(long long)t);
            if(itlow!=s.end() && (long long)*itlow-(long long)nums[i]<=t)
                return true;
            s.insert(nums[i]);
        }
        
        return false;
    }
};