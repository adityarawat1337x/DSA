/*
        vector<pair<int,int>> v;
              vector<int> fill(rat.size(),0);
        for(int i=0;i<rat.size();i++){
        
        }
        for(int i=0;i<rat.size();i++){
            v.push_back({rat[i],i});
        }
        
        sort(v.begin(),v.end());
        
        for(auto i:v){
            int idx = i.second;
            int rating = i.first;
            fill[idx]++;
            
            if(idx-1>=0){
                if(rat[idx-1]>rat[idx])
                     fill[idx-1]=max(fill[idx-1],fill[idx]);
            }
            
            if(idx+1<rat.size()){
                if(rat[idx+1]>rat[idx])
                    fill[idx+1]=max(fill[idx+1],fill[idx]);
            }
        }
        
        int ans=0;
        for(auto i:fill)
            ans+=i;
        return ans;
*/

class Solution {
public:
    int candy(vector<int>& rat) {
        vector<int> fill(rat.size(),1);
        for(int i=1;i<rat.size();i++){
            if(rat[i]>rat[i-1])
                fill[i]=fill[i-1]+1;
        }
        
        
        for(int i=rat.size()-2;i>-1;i--){
            if(rat[i]>rat[i+1])
                fill[i]=max(fill[i],fill[i+1]+1);
        }
        int ans=0;
         for(auto i:fill)
            ans+=i;
        return ans;
    }
};