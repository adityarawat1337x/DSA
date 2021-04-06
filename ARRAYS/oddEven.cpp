#include<bits/stdc++.h>
#include<vector>

using namespace std;

vector<int> solve(vector<int>& nums) {
    vector<int> odd;
    vector<int> even;
    vector<int> ans;

    for(int i:nums){
        if(i%2==0){
            even.push_back(i);
        }else{
            odd.push_back(i);
        }
    }

    sort(even.begin(),even.end());
    sort(odd.begin(),odd.end(),greater<int>());
    for(int i=0;i<nums.size();i++){
           if(nums[i]%2==0){
            ans.push_back(even[0]);
            even.erase(even.begin());
        }else{
            ans.push_back(odd[0]);
            odd.erase(odd.begin());

        }
    }
    return ans;
}


int main(){
    vector<int> arr = {8, 13, 11, 90, -5, 4}; //-4 -1 -1 0 1 2
    arr = solve(arr);
    for(int i:arr){
        cout << i << " ";
    }
    return 0;
}