class Solution {
public:
    vector<char> v={'a','e','i','o','u','#'};
    
    int longestBeautifulSubstring(string word) {
        int curr=0;
        set<char> s;
        int ans=0;
        for(int i=0,j=0;j<word.size();j++){
            if(word[j]>v[curr]){
                if(v[curr+1]==word[j])
                    curr++;
                else{
                    curr=0;
                    i=j;    
                    s.clear();
                }
            }else if(word[j]<v[curr]){
                curr=0;
                i=j;
                s.clear();
            }
            if(word[j]==v[curr]){
                s.insert(word[j]);
            }else{
                i++;
            }
          
            if(s.size()==5){
                ans = max(ans,j-i+1);
            }
        }
        
        return ans;
    }
};