class Solution {
public:
    bool isPossible(vector<int>& nums) {
       vector<int> remain(2010,0),endsWith(2010,0);
       for(int &num:nums){
           remain[num+1002]++;
       }
       for(int &num:nums){
           if(remain[num+1002]==0)
               continue;
           remain[num+1002]--;
           
           if(endsWith[num+1002-1]>0){
                endsWith[num+1002-1]--;
                endsWith[num+1002]++;
           }else if(remain[num+1002+1]>0 and remain[num+1002+2]>0){
               endsWith[num+1002+2]++;
               remain[num+1002+1]--;
               remain[num+1002+2]--;
           }else return false;
       }
        
       return true;
    }
};