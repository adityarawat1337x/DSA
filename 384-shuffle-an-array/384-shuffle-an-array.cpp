class Solution {
    vector<int> original;
    vector<int> curr;
public:
    Solution(vector<int>& nums) {
        original = nums;
        curr=original;
    }
    
    vector<int> reset() {
        curr=original;
        return curr;
    }
    
    vector<int> shuffle() {
        set<int> s;
        int cnt=0;
        for(auto i:original){
            s.insert(cnt++);
        }
        for(int i=0;i<original.size();i++){
            auto it = s.begin();
            int r = rand() % s.size();
            while(r-->0)
                it++;
            int idx = *it;
            s.erase(*it);
            curr[i]=original[idx];
        }
        return curr;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * vector<int> param_1 = obj->reset();
 * vector<int> param_2 = obj->shuffle();
 */