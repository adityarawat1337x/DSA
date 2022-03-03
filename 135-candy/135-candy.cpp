class Solution {
public:
    int candy(vector<int>& rat) {
        vector<pair<int,int>> v;
        vector<int> fill(rat.size(),0);
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
    }
};