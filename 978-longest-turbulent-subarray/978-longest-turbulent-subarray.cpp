class Solution {
public:
    int maxTurbulenceSize(vector<int>& arr) {
        int sign=0,ans=0;
        for(int i=0;i<arr.size()-1;i++,sign*=-1){
            if(arr[i]>arr[i+1]){
                sign=sign>0?sign+1:1;
            }else if(arr[i]<arr[i+1]){
                sign=sign<=0?sign-1:-1;
            }else sign=0;
            ans = max(ans,abs(sign));
        }
        return ans+1;
    }
};
