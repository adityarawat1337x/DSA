class Solution {
public:
    bool check(vector<int>& c1,vector<int>& c2,vector<int>& k){
        return (long long)(k[1]-c1[1])*(long long)(c2[0]-c1[0]) == (long long)(k[0]-c1[0])*(long long)(c2[1]-c1[1]);
    }
    
    int maxPoints(vector<vector<int>>& points) {
        int ans=2;
        if(points.size()<3)
            return points.size();
        for(int i=0;i<points.size();i++){
            for(int j=i+1;j<points.size();j++){
                int cnt=0;
                for(int k=0;k<points.size();k++){
                    if(check(points[i],points[j],points[k])){
                        cnt++;
                    }    
                }
             ans = max(ans,cnt);
            }
        }
        return ans;
     }
};