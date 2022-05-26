class Solution {
public:
    int countTriplets(vector<int>& arr) {
        int cnt=0;
        for(int i=0;i<arr.size();i++){
            int val = arr[i];
            for(int k=i+1;k<arr.size();k++){
                val=val^arr[k];
                if(val==0){
                    cnt+=k-i;
                }
            }
        }
        
        return cnt;
    }
};