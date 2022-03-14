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
        string Path="";
        for(int i=0;i<path.size();i++){
            if(path[i]=='/' and Path.back()=='/'){
                continue;
            }
            Path+=path[i];
                
        }
       
        auto dirs = split(Path);
        
        stack<string> s,s2;
        
        for(auto i:dirs){
            cout<<i<<" ";
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
            s2.push(s.top());
            s.pop();
        }
        
         while(s2.size()){
             ans+='/';
            ans+=s2.top();
            s2.pop();
         }
        
        return ans.size()?ans:"/";
    }
};


