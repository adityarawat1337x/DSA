class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        vector<int> pre;
        int sum=0;
        pre.push_back(arr[0]);
        for(int i=1;i<arr.size();i++){
            pre.push_back(pre.back()+arr[i]);
        }
        
        for(int i=0;i<arr.size();i+=2){
            for(int j=i;j<arr.size();j++){
                sum+=pre[j]-((j-i-1>=0)?pre[j-i-1]:0);
            }
        }
        
        return sum;
    }
};