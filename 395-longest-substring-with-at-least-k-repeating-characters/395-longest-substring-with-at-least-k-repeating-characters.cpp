class Solution {
public:
   void longestWithLengthI(string &s,int &k,int &unique,int &ans){
       int uniqueWithK=0,uniqueSoFar=0;
       int mp[265];
       memset(mp,0,sizeof(mp));
       for(int i=0,j=0;j<s.size();j++){
          if(mp[s[j]]==0){
               uniqueSoFar++;
           }
           mp[s[j]]++;
          
           if(mp[s[j]]==k){
               uniqueWithK++;
           }
           
           while(uniqueSoFar>unique){
               if (mp[s[i]] == k) 
                    uniqueWithK--;
               mp[s[i]]--;
               if(mp[s[i]]==0)
                   uniqueSoFar--;
               i++;
           }
           
           if(uniqueSoFar==unique and uniqueWithK==uniqueSoFar){
               ans = max(ans,j-i+1);
           }
       }
   }
    
    int longestSubstring(string s, int k) {
        int ans=0;
        for(int i=1;i<27;i++){
            longestWithLengthI(s,k,i,ans);
        }
        return ans;
    }
};