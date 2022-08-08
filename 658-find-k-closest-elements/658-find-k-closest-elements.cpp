class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int it = lower_bound(arr.begin(),arr.end(),x)-arr.begin();
        int i=it-1,j=it;
        while(k--){
            if(i<0)j++;
            else if(j>=arr.size())i--;
            else if(abs(arr[i]-x)<=abs(arr[j]-x))
                i--;
            else j++;
        }
        i++;
        vector<int> ans;
        while(i<j and i<arr.size()){
            ans.push_back(arr[i++]);
        }
        return ans;
    }
};