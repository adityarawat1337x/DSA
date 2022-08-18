class Solution {
public:
    int minSetSize(vector<int>& arr) {
        int cnt[100001] = {0};
        for (auto v : arr)
            cnt[v]++;
        
        int freq[100001] = {0};
        
        for (int v = 1; v < 100001; v++) 
            if (cnt[v]) freq[cnt[v]]++;
        
        int ans = 0;
        int left = (arr.size()+1)>>1;
        
        for (int f = 100000; left > 0; f--){
            while (freq[f] && left > 0) {
                left -= f;
                freq[f]--;
                ans++;
            }
        }
        
        return ans;
    }
};