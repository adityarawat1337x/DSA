class Solution {
public:
   static bool comp(string a,string b){
        return a+b>b+a;
    }
    
    string largestNumber(vector<int>& nums) {
        vector<string> help;
        for(auto i:nums){
            help.push_back(to_string(i));
        }
        
        sort(help.begin(),help.end(),comp);
        string ans="";
        for(auto i:help)
            ans+=i;
        int i=0;
        while(i<ans.size()-1 and ans[i]=='0')
            i++;
            
        return ans.substr(i);
        
    }
};