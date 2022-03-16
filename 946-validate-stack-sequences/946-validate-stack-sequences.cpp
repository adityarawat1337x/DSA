class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int> s;
        int ptr=0;
        for(auto i:pushed){
            s.push(i);
            
            while(s.size() and s.top()==popped[ptr]){
                ptr++;
                s.pop();
            }
        }
        
        return s.size()==0 and ptr==popped.size();
    }
};