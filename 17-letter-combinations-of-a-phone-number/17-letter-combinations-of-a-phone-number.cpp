class Solution {
public:
vector<string> keypad = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    
    void lc(vector<string> &ans,string digits,int idx) {
        if(idx>=digits.length())
            return;
        vector<string> answers;
        for (auto rest : keypad[digits[idx] - '0']) {
            for (auto first : ans) {
                answers.push_back(first + rest);
            }
        }
        ans=answers;
        lc(ans,digits,idx+1);
    }
    
    vector<string> letterCombinations(string digits) {
        if (digits.empty()) return {};
        vector<string> ans;
        string tmp="";
        for(char i:keypad[digits[0] - '0']){
            ans.push_back(tmp+i);
        }
        lc(ans,digits,1);
        return ans;
    }
};