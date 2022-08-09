class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) {
        int mp[2051]={0};
        int ans=0,sum=0,mx=0;
        for(auto &i:logs){
            mp[i[0]]++;
            mp[i[1]]--;
        }
        for(int i=0;i<2051;i++){
            sum+=mp[i];
            if(sum>mx){
                mx=sum;
                ans=i;
            }
        }
        return ans;
    }
};