class Solution {
public:
    int minPartitions(string n) {
        int ans=0;
        for(int i=0;i<n.size();i++){
            if(ans+'0'<n[i]){
                ans = n[i]-'0';
            }
        }
        return ans;}
};