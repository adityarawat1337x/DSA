class Solution {
public:
    vector<string> reorderLogFiles(vector<string>& logs) {
        vector<pair<string,string>> let;
        vector<string> dig;
        for(auto str:logs){
            int sp = str.find(' ');
            string id = str.substr(0,sp);
            string log = str.substr(sp);
            if(isalpha(log[1])){
                let.push_back({id,log});
            }else{
                dig.push_back(str);
            }
        }
        
        sort(let.begin(),let.end(),[&](auto &a,auto &b){
            if(a.second==b.second)
                return a.first<b.first;
            return a.second<b.second;
        });
        
        vector<string> ans;
        for(auto i:let){
            ans.push_back(i.first+i.second);
        }
        
        for(auto i:dig){
            ans.push_back(i);
        }
        
        return ans;
    }
};