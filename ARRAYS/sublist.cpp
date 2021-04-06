#include<bits/stdc++.h>
#include<vector>

using namespace std;

int solve(vector<int>& nums) {
    auto n=nums.size();
    int k=1;
    int min=INT_MAX;
    set<int> s;
    map<int,int> x;
    pair<int,int> p;
    for(int i=0;i<n;i++){
        x[nums[i]]++;
    }
    for(int i=0;i<n;i++){
        if(k<x[nums[i]])
            k=x[nums[i]];
    }
    for(int i=0;i<n;i++){
        if(k==x[nums[i]]){
            s.insert(nums[i]);
        }
    }
    int ans=INT_MAX;
    for(auto i:s){
        int l=0,r=n-1;
        while(l<r){
            if(nums[r]!=i)
                r--;
            if(nums[l]!=i)
                l++;
            if(nums[r]!=i && nums[l]!=i)
                if(ans>r-l+1)
                    ans=r-l+1;
        }
    }

    return ans;
}

int main(){
    vector<int> nums = {1, 2, 3, 4, 3, 1}; // -2 -2 1 3 4 5
    cout<<solve(nums);
    return 0;
}