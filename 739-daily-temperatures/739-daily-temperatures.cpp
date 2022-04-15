class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        stack<int> s;
        vector<int> v(temp.size());
        
        for(int i=temp.size()-1;i>-1;i--){
            while(!s.empty() and temp[s.top()]<=temp[i])
                s.pop();
            v[i]=s.empty()?0:s.top()-i;
            s.push(i);
        }
        
        return v;
    }
};