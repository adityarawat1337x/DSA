class Solution {
public:
    bool isCovered(vector<vector<int>>& ranges, int left, int right) {
        int arr[52]={0};
        for(auto &i:ranges){
            arr[i[0]]++;
            arr[i[1]+1]--;
        }
        int sum=0;
        for(int i=0;i<51;i++){
            sum+=arr[i];
            if(i>=left and i<=right and sum==0)return false;
        }
        return true;
    }
};