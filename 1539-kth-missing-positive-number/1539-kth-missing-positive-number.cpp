class Solution {
public:
    
    int smaller(vector<int>& arr, int target){
        int l=0,r=arr.size()-1;
        
        while(l<=r){
            int m = (l+r)>>1;
            if(target<=arr[m]){
                r=m-1;
            }else
                l=m+1;
        }
        cout<<target<<" -> "<<l<<"\n";
        return target-l;
    }
    
    int findKthPositive(vector<int>& arr, int k) {
        int missing=1;
        
        for(int i=0;i<arr.size();i++){
            if(arr[i]!=missing){
                k--;
                i--;
            }
            missing++;
            
            if(k==0)
                break;
        }
        
        return missing+k-1;
        
        int l=1,r=arr.back()+1;
        k--;
        while(l<=r){
            int m = (l+r)>>1;
            if(k<smaller(arr,m)){
                r=m-1;
            }else
                l=m+1;
        }
        
        return l;
    }
};