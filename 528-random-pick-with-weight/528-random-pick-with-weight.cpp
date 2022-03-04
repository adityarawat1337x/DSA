class Solution {
public:
    int sum=0,n;
    vector<int> presum;
    Solution(vector<int>& w) {
        n=w.size()-1;
        for(auto i:w){
            sum+=i;
            presum.push_back(sum);
        }
    }
    
    int pickIndex() {
        int idx = rand()%sum + 1;
        return lower_bound(presum.begin(),presum.end(),idx)-presum.begin();
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(w);
 * int param_1 = obj->pickIndex();
 */