#include<bits/stdc++.h>
#include<vector>

using namespace std;

class Solution
{
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int,bool> hash;
        for(int i : nums){
            if(hash[i]==true){
                return true;
            }
            hash[i]=true;
        }
    return false;
    }
};