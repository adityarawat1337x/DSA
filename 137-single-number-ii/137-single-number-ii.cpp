class Solution {
public:
    int singleNumber(vector<int>& nums) {
        vector<int> v(32,0);
        for(auto i:nums){
            for(int j=0;j<32;j++){
                int bit = (1<<j);
                if((i&bit))
                    v[j]++;
            }
        }
        
        int ans=0;
        for(int i=0;i<v.size();i++){
            if(v[i]%3!=0)
                ans|=(1<<i);
        }
        return ans;
    }
};