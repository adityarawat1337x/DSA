// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    vector<long long int> productExceptSelf(vector<long long int>& arr, int n) {
        vector<long long int>  ans(n,1);
        
        long long int zer=0,prod=1,prod2=1,pos=0;
        
        for(int i=n-1;i>-1;i--){
            if(!arr[i]){
                zer++;
                pos=i;
            }
            prod*=arr[i];
        }
        
        
        if(zer==1){
            arr[pos]=1;
            for(int i=n-1;i>-1;i--){
                prod2*=arr[i];
            }
            arr[pos]=0;
        }
        
        for(int i=0;i<n;i++){
            long long int res = (zer==0 || zer>1)?(arr[i]!=0?prod/arr[i]:prod):(arr[i]==0?prod2:prod);
            ans[i]=res;
            
        }
        
        return ans;
    }
};



///boooooooommmm
// { Driver Code Starts.
int main()
 {
    int t;  // number of test cases
    cin>>t;
    while(t--)
    {
        int n;  // size of the array
        cin>>n;
        vector<long long int> arr(n),vec(n);
        
        for(int i=0;i<n;i++)    // input the array
        {
            cin>>arr[i];
        }
        Solution obj;
        vec = obj.productExceptSelf(arr,n);   // function call
        
        for(int i=0;i<n;i++)    // print the output
        {
            cout << vec[i] << " ";
        }
        cout<<endl;
    }
	return 0;
}  // } Driver Code Ends