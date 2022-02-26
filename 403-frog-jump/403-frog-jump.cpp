class Solution {
    public:
    
    bool canCross(vector<int>& stones) {
        if (stones.size() == 0) {
        	return true;
        }
        unordered_map<int,set<int>> mp;
        set<int> s;
        for(auto i:stones){
            mp[i]=s;   
        }
        mp[0].insert(1);
        
        for(int i=0;i<stones.size()-1;i++){
            int stone = stones[i];
            for(auto jumps:mp[stone]){
                int nextJump = stone+jumps;
                if(stones.back()==nextJump)
                    return true;
                if(mp.find(nextJump)!=mp.end()){
                    mp[nextJump].insert(jumps);
                    if(jumps>0)
                       mp[nextJump].insert(jumps-1);
                    mp[nextJump].insert(jumps+1);
                }
            }
        }
        
        return false;
    }
};

