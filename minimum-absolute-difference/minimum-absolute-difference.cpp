class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        vector<vector<int>> ans;
         sort(arr.begin(),arr.end());
        unsigned int minD = INT_MAX;
        for(int i=0;i<arr.size()-1;i++)
            if(abs(arr[i]-arr[i+1]) < minD)
                minD = abs(arr[i]-arr[i+1]);
            
       for(int i=0;i<arr.size()-1;i++){
            if(abs(arr[i]-arr[i+1]) == minD){
               vector<int> tmp;
                tmp.push_back(arr[i]);
                tmp.push_back(arr[i+1]);
                ans.push_back(tmp);
            }
        }
        return ans;
    }
};