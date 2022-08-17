class Solution {
public:
    void subsets(int idx,int r,vector<long> &s,long sum,vector<int>& nums){
        if(idx>r){
            s.push_back(sum);
            return;
        }
        subsets(idx+1,r,s,sum,nums);
        subsets(idx+1,r,s,sum+nums[idx],nums);
    }
    
    void subsets(int idx,int r,set<long> &s,long sum,vector<int>& nums){
        if(idx>r){
            s.insert(sum);
            return;
        }
        subsets(idx+1,r,s,sum,nums);
        subsets(idx+1,r,s,sum+nums[idx],nums);
    }
    
    int minAbsDifference(vector<int>& nums, int goal) {
        //meet in the middle lagaooo brooo
        int n=nums.size();
        vector<long> left;
        set<long> right;
    
        // subsets are ready
        subsets(0,n/2,left,0LL,nums);
        subsets(n/2+1,n-1,right,0LL,nums);
        
        long ans=INT_MAX;
        for(auto &sum:left){
            
            auto it = right.lower_bound((goal-sum));    
            
            if(it!=right.end()){
                ans = min(ans,abs(goal-sum-*it));
            }
            if(it!=right.begin()){
                it--;
                ans = min(ans,abs(goal-sum-*it));
            }
            
            if(ans==0)
                return ans;
        }
        
        return ans;
    }
};