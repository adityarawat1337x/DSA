#include<bits/stdc++.h>
#include<vector>

using namespace std;


int search(vector<int>& nums, int target) {
    int k=0,ans=0,l,r,n=nums.size();
    for(int i=1;i<n;i++)
        if(nums[i]>=nums[k])
            k=i;
    r=k;
    l=(k+1)%n;
    if(l<r)
    while(l<r){
        int m = (l+r)/2;
        if(nums[m]==target)
            return m;
        if(nums[m]>target)
            r=(m-1)%n;
        else
            l=(m+1)%n;
    }
    else
    while(l>r){
        int m = (l+r)/2;
        if(nums[l]==target)
            return l;
        if(nums[r]==target)
            return r;
        if (nums[m] == target)
            return m;
        if(nums[m]>target)
            r=(m-1)%n;
        else
            l=(m+1)%n;
    }
return -1;
}


int main(){
    vector<int> a{4,5,6,7,0,1,2};
    cout<< search(a,0);
    return 0;
}
