class Solution {
public:
    
    void decr(priority_queue<pair<int,char>> &pq){
        auto x = pq.top();
        pq.pop();
        x.first--;
        pq.push(x);
        while( !pq.empty() and pq.top().first<=0)
            pq.pop();
    }
    
    string reorganizeString(string s) {
        priority_queue<pair<int,char>> pq;
        vector<int> v(26,0);
        
        for(auto c:s)
            v[c-'a']++;
        
        for(int i=0;i<26;i++){
            char c='a'+i;
            if(v[i]>0){
                pq.push({v[i],c});
            }
        }
        
        
        string tmp="";
        while(!pq.empty()){
            while(!pq.empty() and pq.top().first<=0)
                pq.pop();
            if(tmp=="" or pq.top().second!=tmp.back()){
                tmp+=pq.top().second;
                decr(pq);
            }else{
                if(pq.size()==1)
                    return "";
                else{
                    auto x = pq.top();
                    pq.pop();
                    tmp+=pq.top().second;
                    decr(pq);
                    pq.push(x);
                }
                
            }
        }
        
        return tmp;
    }
};