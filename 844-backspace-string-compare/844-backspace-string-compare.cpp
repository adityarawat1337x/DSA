class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> s1,s2;
        for(auto i:s){
            if(i=='#'){
                if(s1.size())
                    s1.pop();
            }else s1.push(i);
        }
        for(auto i:t){
            if(i=='#'){
                if(s2.size())
                    s2.pop();
            }else s2.push(i);
        }
        
        if(s1.size()!=s2.size())
            return false;
        while(s1.size()){
            auto a = s1.top();
            s1.pop();
            auto b = s2.top();
            s2.pop();
            if(a!=b)
                return false;
        }
        
        return true;
    }
};