class Solution {
public:
    int minSetSize(vector<int>& arr) {
        vector<int> v(100001);
        for(auto &i:arr)
            v[i]++;
        sort(v.rbegin(),v.rend());
        
        int n=arr.size(),m=0,cnt=0;
        
        for(auto &i:v){
            m+=i;
            cnt++;
            if(m>=n/2)
                break;
        }
        return cnt;
    }
};