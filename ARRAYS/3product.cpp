#include<bits/stdc++.h>
#include<vector>

using namespace std;

int solve(vector<int>& nums) {
    int max=0;
    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size() - 1; i++)
    {
        int start=i+1,end=nums.size()-1;
        while(start<end){
            int tmp=nums[start]*nums[end]*nums[i];
            if(tmp>max){
                max=tmp;
                end--;
                }
            if (tmp<max)
                start++;
            else{   
                start++;
                end--;
            }
        }
    }
    return max;
}

int main(){
    vector<int> arr = {5, 4, 1, 3, -2, -2}; // -2 -2 1 3 4 5
    cout<<solve(arr);
    return 0;
}