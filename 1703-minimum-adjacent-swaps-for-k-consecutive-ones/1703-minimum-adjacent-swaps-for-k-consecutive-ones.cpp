class Solution {
public:
    int minMoves(vector<int>& nums, int k) {
        long i=0,j=0,sum=0;
        int ans=INT_MAX;
        
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
        int left = 0, right = k - 1;
		while (right < ones.size()) {
			if (k%2== 1) {
				int medianInd = left + (k + 1) / 2 - 1;
				int rad = medianInd - left;
				int res = (presum[right] - presum[medianInd])
						- ((medianInd == 0 ? 0 : presum[medianInd - 1]) - (left == 0 ? 0 : presum[left - 1])) - rad * (rad + 1);
				ans = min(ans, res);
			} else {
				int medianInd = left + (k + 1) / 2 - 1;
				int rad = medianInd - left;
				int res = (presum[right] - presum[medianInd])
						- ((medianInd == 0 ? 0 : presum[medianInd - 1]) - (left == 0 ? 0 : presum[left - 1]))
						- ones[medianInd] - rad * (rad + 1) - (rad + 1);
				ans = min(ans, res);
			}
			left++;
			right++;
		}
		return ans;
    }
};