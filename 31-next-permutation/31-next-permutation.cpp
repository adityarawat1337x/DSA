class Solution {
public:
    
    void nextPermutation(vector<int>& arr) {
        int brk=-1;
        for(int i=arr.size()-2;i>-1;i--){
            if(arr[i]<arr[i+1]){
                brk=i;
                break;
            }
        }
        
        if(brk==-1){
            reverse(arr.begin(),arr.end());
            return;
        }
        
          for(int i=arr.size()-1;i>brk;i--){
            if(arr[i]>arr[brk]){
                swap(arr[i],arr[brk]);
                reverse(arr.begin()+brk+1,arr.end());
                return;
            }
        }
    }
};