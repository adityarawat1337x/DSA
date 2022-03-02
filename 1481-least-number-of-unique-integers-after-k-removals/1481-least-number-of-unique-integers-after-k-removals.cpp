class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int,int> mp;
        for(auto i:arr){
            mp[i]++;
        }
        
        priority_queue<pair<int,int>> pq;
        for(auto i:mp){
            pq.push({-i.second,i.first});
        }
        int cnt=mp.size();
        while(k){
            if(pq.size() and k>=-pq.top().first){
                k+=pq.top().first;
                pq.pop();
                cnt--;
            }else{
                break;
            }
        }
        
        return cnt>=0?cnt:0;
    }
};