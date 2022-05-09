class Solution {
public:
vector<string> keypad = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    
    vector<string> lc(string digits) {
       vector<string> answers;
        if (digits.empty()) return {""};
     
        for (auto first : keypad[digits[0] - '0']) {
            for (auto rest : lc(digits.substr(1))) {
                answers.push_back(first + rest);
            }
        }
        return answers;
    }
    
    vector<string> letterCombinations(string digits) {
        if (digits.empty()) return {};
       return lc(digits);
      
       
    }
};