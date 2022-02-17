class Solution {
public:
    int maxSatisfaction(vector<int>& satisfaction) {
        sort(satisfaction.rbegin(), satisfaction.rend());
        int res = 0, sum=0, curr=0;
        for(int num: satisfaction){
                sum += curr + num;
                curr += num;
                res = max(res, sum);
        }
        return res;
    }
};