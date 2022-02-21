class Solution {
public:
    vector<long long> maximumEvenSplit(long long finalSum) {
        vector<long long> ans;
        if(finalSum&1)
            return ans;
        
        for(int i=2;i<=finalSum;i+=2){
            ans.push_back(i);
            finalSum-=i;
        }
        
        ans.back()+=finalSum;
        return ans;
    }
};