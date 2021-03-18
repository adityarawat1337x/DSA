#include<bits/stdc++.h>
#include<vector>

using namespace std;

class Solution {
public:
    bool isValid(string s) {
        vector<char> ans;
        ans.push_back(s[0]);
        for(int i=1 ;i<s.length(); i++){
            if(s[i]==')'  && ans.size()>0  && ans.back()=='(')
                    ans.pop_back();
            else if(s[i]=='}' && ans.size()>0 &&ans.back()=='{')
                    ans.pop_back();
            else if(s[i]==']'  && ans.size()>0  && ans.back()=='[')
                    ans.pop_back();
            else               
                ans.push_back(s[i]);
        }
        if(ans.size()>0)
            return false;
        else return true;
    }
};