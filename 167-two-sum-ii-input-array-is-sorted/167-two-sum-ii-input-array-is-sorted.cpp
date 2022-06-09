class Solution {
public:
    vector<int> twoSum(vector<int>& num, int target) {
        for(int i=0;i<num.size();i++){
            int idx = upper_bound(num.begin()+i+1,num.end(),target-num[i])-num.begin();
            if(num[i]+num[idx-1]==target){
                return {i+1,idx};
            }
        }
        
        return {};
    }
};