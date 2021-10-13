class Solution {
public:
    int maxs(vector<int>& nums)
    {
        int max_so_far = INT_MIN, max_ending_here = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            max_ending_here = max_ending_here + nums[i];
            if (max_so_far < max_ending_here)
                max_so_far = max_ending_here;

            if (max_ending_here < 0)
                max_ending_here = 0;
        }
        return max_so_far;
    }
    int mins(vector<int>& nums)
    {
        int max_so_far = INT_MAX, max_ending_here = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            max_ending_here = max_ending_here + nums[i];
            if (max_so_far > max_ending_here)
                max_so_far = max_ending_here;

            if (max_ending_here > 0)
                max_ending_here = 0;
        }
        return max_so_far;
    }
    int maxSubarraySumCircular(vector<int>& nums) {
        int m = INT_MIN,sm=0;
        for(int i=0;i<nums.size();i++){
            m = max(m,nums[i]);
            sm+=nums[i];
        }
        int i=0;
        for(;i<nums.size();i++){
            if(nums[i]>0)
                break;
        }
        if(i==nums.size())
            return m;
        
        return max(maxs(nums),sm-mins(nums));
    }
};