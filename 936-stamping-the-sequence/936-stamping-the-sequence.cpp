class Solution {
public:
    vector<int> res;
    vector<bool> vis;
    
    bool replace(string &target,int idx,string &stamp,int &fill){
        
        for(int i=idx,j=0;i<target.size() and j<stamp.size();i++,j++){
            if(target[i]!='?' and target[i]!=stamp[j])
                return false;
        }
        
        int prevFill=fill;
        
        for(int i=idx;i<idx+stamp.size();i++){
            if(target[i]!='?'){
                target[i]='?';
                fill++;
            }
        }
        
        return fill>prevFill;
    }
    
    vector<int> movesToStamp(string stamp, string target) {
        int fill = 0,visi=0;
        vis.resize(target.size(),0);
        
        while(fill<target.size()){
            int sz=res.size();
            
            for(int i=0;i<=target.size()-stamp.size();i++){
                if(!vis[i] and replace(target,i,stamp,fill)){
                    vis[i]=true;
                    res.push_back(i);
                }
                if(fill==target.size())
                    break;
            }
            
            if(res.size()==sz)
                return {};
        }
        
        reverse(res.begin(),res.end());
        return res;
    }
};