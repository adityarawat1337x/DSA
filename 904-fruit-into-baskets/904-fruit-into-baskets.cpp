class Solution {
public:
    int totalFruit(vector<int>& nums) {
        unordered_map<int,int> mp;
        int len=0;
        for(int i=0,j=0;j<nums.size();j++){
            mp[nums[j]]=j;
            if(mp.size()<=2){
                len = max(j-i+1,len);            
            }else if(mp.size()>2){
                for(auto it:mp){
                    if(nums[j-1]!=it.first and nums[j]!=it.first){
                        i=it.second+1;
                        mp.erase(it.first);
                        break;
                    }
                }
            }
        }
        
        return len;
    }
};