class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        if(nums.size()<3)
            return false;
        stack<int> s;
        reverse(nums.begin(),nums.end());
        int maxi = INT_MIN;
        for(auto i:nums){
            if(i<maxi)
                return true;
            while(!s.empty() and s.top()<i){
                maxi = s.top();
                s.pop();
            }
            s.push(i);
        }
        
        return false;
    }
};