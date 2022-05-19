class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int> pre;
        pre.push_back(0);
        int maxi=0;        
        for(int i=0;i<gain.size();i++){
            pre.push_back(pre.back()+gain[i]);
            maxi=max(maxi,pre.back());
        }
        return maxi;
    }
};