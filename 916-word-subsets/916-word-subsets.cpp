class Solution {
public:
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        vector<string> v;
        int vis[26];
        memset(vis,0,sizeof vis);
        for(int i=0;i<26;i++){
            int mx=0;
            for(auto &j:words2){
                int cnt=0;
                for(auto &x:j)
                      if(x-'a'==i)
                          cnt++;
                mx=max(mx,cnt);
            }
            vis[i]=mx;
        }
        for(auto &s:words1){
           bool f=1;
           for(auto &i:s)
              vis[i-'a']--;
           for(int i=0;i<26;i++)
              if(vis[i]>0) f=0;
           for(auto &i:s)
              vis[i-'a']++;
            if(f) v.push_back(s);
        }

        return v;
    }
};