class Solution {
public:
    int minMoves(vector<int>& nums, int k) {
        long i=0,j=0,ans=INT_MAX;
        
        //only 1 matters so make a vector of 1 indexes
        vector<long> ones;
        vector<long> preSum(1);
        
        while(i<nums.size()){
            if(nums[i]==1)
                ones.push_back(i);
            i++;
        }
        
        //prefix array ready        
        i=0;
        while(i<ones.size()){
            preSum.push_back(preSum[i]+ones[i]);
             i++;
        }
        
        //maintain a window of k
        while(j<ones.size()-k+1){
            ans = min(ans,(preSum[j+k] - preSum[k/2+j] - preSum[(k+1)/2 + j] + preSum[j]));
            j++;
        }
        
        ans -= (k/2)*((k+1)/2);
        
        return ans;
    }
};