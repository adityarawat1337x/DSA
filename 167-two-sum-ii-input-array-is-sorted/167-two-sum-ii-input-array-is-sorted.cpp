class Solution {
public:
    vector<int> twoSum(vector<int>& num, int target) {
        for(int j=num.size()-1,i=0;i<j;){
            int tmp = num[i]+num[j];
            if(tmp==target){
                return {i+1,j+1};
            }else{
                if(tmp>target){
                    j--;
                }else{
                    i++;
                }
            }
        }
        
        return {};
    }
};