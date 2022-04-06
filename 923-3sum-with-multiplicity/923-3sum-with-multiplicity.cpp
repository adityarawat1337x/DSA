class Solution {
public:

    int threeSumMulti(vector<int>& arr, int target) {
        
        int mod = 1e9 + 7;
        int ans=0;
        sort(arr.begin(),arr.end());
  
        for(int i=0;i<arr.size();i++)
            for(int j=i+1,k=arr.size()-1;j<k;){
                int rem = arr[i]+arr[j]+arr[k];
                if(rem>target){
                    k--;
                }else if(rem<target){
                    j++;
                }else{
                    int l=0,r=0;
                    int J=arr[j],K=arr[k];
                    int jprev=j,kprev=k;
                    
                    if(arr[j]==arr[k]){
                        int num = k-j+1;
                        ans=(ans + (num*(num-1))/2)%mod;
                        break;
                    }
                    while(arr[j]==J){
                        l++;
                        j++;
                    }
                    while(arr[k]==K){
                        r++;
                        k--;
                    }
                    ans=(ans+(l*r));
                }
        }       
        
        return ans;    
    }
};