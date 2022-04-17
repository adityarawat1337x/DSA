class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        unordered_map<int,int> mp;
        for(auto i:nums1)
            for(auto j:nums2)
            mp[-i-j]++;
        int ans=0;
            for(int j=0;j<nums3.size();j++)
                for(int k=0;k<nums4.size();k++)
                    if(mp.find(nums3[j]+nums4[k])!=mp.end())
                        ans+=mp[nums3[j]+nums4[k]];
        return ans;
    }
};