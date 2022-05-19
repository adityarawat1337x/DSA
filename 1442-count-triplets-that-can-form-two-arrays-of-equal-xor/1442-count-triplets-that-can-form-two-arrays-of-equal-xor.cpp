class Solution {
public:
    int countTriplets(vector<int>& arr) {
        int cnt=0;
        vector<int> pre;
        pre.push_back(arr[0]);
        for(int i=1;i<arr.size();i++){
            pre.push_back(pre.back()^arr[i]);
        }
        for(int i=0;i<arr.size();i++){
            for(int j=i+1;j<arr.size();j++){
                for(int k=j;k<arr.size();k++){
                    if(pre[j-1]^(i>0?pre[i-1]:0) == pre[k]^pre[j-1])
                        cnt++;
                }
            }
        }
        
        return cnt;
    }
};