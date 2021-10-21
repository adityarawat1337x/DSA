class Solution {
public:
/*    bool check(vector<string> &nums,string s){
        for(int i=0;i<nums.size();i++){
            if(nums[i]==s)
                return false;
        }
        return true;
    }
    
    string itr(vector<string> &nums,string s,int n){
        if(s.size()==n){
            if(check(nums,s))
                return s;
            return "";
        }
        
        s.push_back('1');
        string a = itr(nums,s,n);
        s.pop_back();
        s.push_back('0');
        string b = itr(nums,s,n);
        s.pop_back();
        if(a.size())
            return a;
        if(b.size())
            return b;
        return "";
        
    }
*/    
    string findDifferentBinaryString(vector<string>& nums) {
        string s="";
        for(int i=0;i<nums.size();i++){
            char c = (nums[i][i]=='0')?'1':'0';
            s.push_back(c);
        }
        
        return s;
    }
};