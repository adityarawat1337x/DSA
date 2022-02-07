class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int> q;
        int i=0;
        while(i<k){
            while(q.size() and q.back()<nums[i])
                q.pop_back();
            q.push_back(nums[i]);
            i++;
        }
        vector<int> ans;
        ans.push_back(q.front());
        for(i=k;i<nums.size();i++){
            while(q.size() and q.back()<nums[i])
                q.pop_back();
            q.push_back(nums[i]);
            if(nums[i-k]==q.front())
                q.pop_front();
            ans.push_back(q.front());
            
        }
        
        return ans;
    }
};