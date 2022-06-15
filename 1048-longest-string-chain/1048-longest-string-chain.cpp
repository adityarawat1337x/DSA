class Solution {
public:
    bool check(string &a,string &b){
         if(b.size()==a.size()+1){
             int flag=0;
             for(int i=0,j=0;i<a.size() and j<b.size();i++,j++){
                 if(a[i]!=b[j]){
                     i--;
                     flag++;
                 }
             }
             return flag<=1;
         }
        return false;
    }
    
    int find(int &idx,vector<string> &words,int len, vector<vector<int>> &dp){
        if(idx<0)
            return len;
        
        if(dp[idx][len]!=-1)
            return dp[idx][len];
        
        int ans=len;
        
        for(int i=idx-1;i>-1;i--){
            if(check(words[i],words[idx])){
                ans = max(ans,find(i,words,len+1,dp));
            }
            if(words[i].size()>words[idx].size()+1){
                break;
            }
        }
        return dp[idx][len] = ans;
    }
    
    int longestStrChain(vector<string>& words) {
        int ans=0;
        sort(words.begin(),words.end(),[](auto &a,auto &b){
            return a.size()<b.size();
        });
        vector<vector<int>> dp(words.size()+1,vector<int>(words.size()+1,-1));
        for(int i=words.size()-1;i>-1;i--){
            ans = max(ans,find(i,words,1,dp));
        }
        return ans;
    }
};