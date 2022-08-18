class Solution {
public:
    int minSetSize(vector<int>& arr) {
        unordered_map<int,int> mp;
        for(auto &i:arr)
            mp[i]++;
                
        int n=arr.size(),m=0,cnt=0;
        vector<int> v;
        
        for(auto &it:mp)
            v.push_back(it.second);
        
        sort(v.rbegin(),v.rend());
        
        for(auto &i:v){
            m+=i;
            cnt++;
            if(m>=n/2)
                break;
        }
        return cnt;
    }
};