#include<bits/stdc++.h>
#include<vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> hash;
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            if (hash.find(complement)!=hash.end()) {
                ans.push_back(hash[complement]);
                ans.push_back(i);
                return  ans;
            }
            hash[nums[i]]=i;
        }
    return ans;        
    }
};