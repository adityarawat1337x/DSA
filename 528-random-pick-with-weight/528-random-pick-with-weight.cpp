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
        int left = 0, right = presum.size() - 1;
        while(left<right){
            int mid = left + (right-left)/2;
            if(presum[mid] == idx)
                return mid;
            else if(presum[mid] < idx)
                left = mid + 1;
            else
                right = mid;
        }
        return left;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(w);
 * int param_1 = obj->pickIndex();
 */