class Solution {
public:
    int minDeletions(string s) {
        vector<int> v(s.size()+1,0);
        vector<int> sr(26,0);
        for(auto t:s){
            sr[t-'a']++;
        }        
        
        sort(sr.rbegin(),sr.rend());
        int ans=0;
        for(auto i:sr){
            if(v[i]){
                int avail = i;
                while(avail>0 and v[avail]!=0){
                    avail--;
                }
                if(avail==0)
                    ans+=i;
                else{
                    v[avail]=1;
                    ans+=i-avail;
                }
            }else{
                v[i]=1;
            }
        }
        
        return ans;
    }
};