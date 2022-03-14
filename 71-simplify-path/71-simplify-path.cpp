class Solution {
public:
    vector<string> split(string path){
        vector<string> ans;
        string tmp="";
        for(auto i:path){
            if(i=='/'){
                if(tmp.size())
                    ans.push_back(tmp);
            tmp="";
            continue;
            }
            tmp+=i;
        }
        if(tmp.size())
            ans.push_back(tmp);
        return ans;
    }
    
    string simplifyPath(string path) {
      
        auto dirs = split(path);
        
        stack<string> s,s2;
        
        for(auto i:dirs){
            if(i==".."){
                if(s.size())
                    s.pop();
            }
            else if(i==".")
                continue;
            else{
                s.push(i);
            }
        }
        
        string ans = "";
        
         while(s.size()){
           
            ans="/"+s.top()+ans;
            s.pop();
         }
        
        return ans.size()?ans:"/";
    }
};


