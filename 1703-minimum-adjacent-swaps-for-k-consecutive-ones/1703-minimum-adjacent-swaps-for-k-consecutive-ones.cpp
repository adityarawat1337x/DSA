class Solution {
public:
    int minMoves(vector<int>& nums, int k) {
        long i=0,j=0,sum=0;
        long ans=INT_MAX;
        
        //only 1 matters so make a vector of 1 indexes
        vector<long> ones;
        vector<long> presum;
        
        while(i<nums.size()){
            if(nums[i]==1)
                ones.push_back(i);
            i++;
        }
        
        int n=ones.size();
        
        //prefix array ready        
        i=0;
        while(i<ones.size()){
            sum+=ones[i];
            presum.push_back(sum);
            i++;
        }
        
        //maintain a window of k and lets find cost of moving everything at median
    
    long left = 0, right = k - 1;
		while (right < ones.size()) {
            long medianInd = left + (k+1)/2 - 1;
            long rad = medianInd - left;
            long l = (medianInd == 0 ? 0 : presum[medianInd-1]) - (left == 0 ? 0 : presum[left-1]);
            long r = (presum[right] - presum[medianInd]);
            long res = r-l-rad*(rad+1);
            
            //checking for even extra radius removal
            if (k%2==0) {
                res=res-(rad+1)-ones[medianInd];
            }
        
            ans = min(ans,res);
			left++;
			right++;
		}
		return ans;
    }
};

