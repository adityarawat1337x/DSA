#include<bits/stdc++.h>
#include<vector>

using namespace std;

bool check(vector<int>& nums) {
    int m=0;
    for(int i=1;i<nums.size();i++){
        if(min(nums[m],nums[i])!=nums[m]){
            m=i;
        }
    }
    for (int i = 0; i < nums.size()-1; i++)
    {
        cout << nums[m % nums.size()] << ":" << nums[(m+1) % nums.size()] << " ";
        if(nums[m%nums.size()]>nums[(m+1)%nums.size()]){
            return false;
            }
        m++;
    }
    return true;
}

int main(){
    vector<int> nums = {3,4,5,1,2}; // -2 -2 1 3 4 5
    cout<<check(nums);
    return 0;
}