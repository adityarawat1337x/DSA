class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& rs) {
          int total = n*2;
        for(auto &i:rs){
            i[0]--;
            i[1]--;
        }

        map<int,vector<int>> mp;

        for(auto i:rs){
            if(i[1]==0 || i[1]==9)
                continue;
            mp[i[0]].push_back(i[1]);
        }
        
        int left=0,right=0,mid=0;
        
        for(auto i:mp){
            vector<int> arr = i.second;
            left=right=mid=0;
            
            for(auto j:arr){
                if((j>0 && j<5) && left==0){
                    left=1;
                    total--;
                }
               
                if(j>4 && j<9 && right==0){
                    right=1;
                    total--;
                }
                
                if((j>2 && j<7) && mid==0){
                    mid=1;
                }
            }
            if(mid==0 && left==1 && right==1){
                total++;
            }
        }
            
        return total;
    }
};