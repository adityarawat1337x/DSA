#include<bits/stdc++.h>
#include<vector>

using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int start,end;
        start=end=0;
        int max=nums[0];
        int sum=0;
        while(end<nums.size()){
            if(sum<0){
                sum=0;
                start=end;
            }
            sum+=nums[end];
            end++;
            if(max<sum){
                max=sum;
            }
        }
    return max;
    }
};