class Solution {
public:
    vector<int> smallestRange(vector<vector<int>>& nums) {
        priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,
        greater<pair<int,pair<int,int>>>> pq;
        int maxi=INT_MIN;
        vector<int> ans;
        int mini = INT_MAX;
        int k=nums.size();
        
        for(int i=0;i<nums.size();i++){
            pq.push({nums[i][0],{i,0}});
            maxi = max(nums[i][0],maxi);
        }
        
        if(mini > maxi - pq.top().first){
            mini = maxi - pq.top().first;
            ans = {pq.top().first,maxi};
        }
        int flag = k;
        while(flag){
            int idx = pq.top().second.second+1;
            int row = pq.top().second.first;
            if(idx >= nums[row].size()){
                flag--;
                continue;
            }
            pq.pop();
            maxi = max(maxi,nums[row][idx]);
            pq.push({nums[row][idx],{row,idx}});
            if(mini > maxi - pq.top().first){
                mini = maxi - pq.top().first;
                ans = {pq.top().first,maxi};
            }
        }
       
        return ans;
        
    }
};