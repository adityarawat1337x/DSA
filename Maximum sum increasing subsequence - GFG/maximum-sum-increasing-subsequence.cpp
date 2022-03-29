// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	public:
	int solve(int arr[],int idx,int prev,vector<int> &dp){
	    if(idx<0){
	        return 0;
	    }
	    
	   if(dp[prev]!=-1)
	        return dp[prev];
	   
	   int inc=0,exc=0;
	   
	   if(arr[idx]<arr[prev]){
	       inc = arr[idx] + solve(arr,idx-1,idx,dp);
	   }
	   
	   exc = solve(arr,idx-1,prev,dp);
	   
	   dp[prev] = max(exc,inc);
	   return dp[prev];
	}
	
	int maxSumIS(int arr[], int n)
	{  
	   vector<int> dp(n,0);
	   dp[0]=arr[0];
	   for(int i=1;i<n;i++){
	       int maxi=0;
	         for(int j=0;j<i;j++){
	              int inc=0,exc=0;
            	   if(arr[j]<arr[i]){
            	       maxi=max(maxi,dp[j]);
            	   }
	         }	   
            	   dp[i] = maxi + arr[i];
	         
	   }
	   
	   return *max_element(dp.begin(),dp.end());
	   
	}  
};

// { Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n];

        for(int i = 0; i < n; i++)
        	cin >> a[i];

      

	    Solution ob;
	    cout << ob.maxSumIS(a, n) << "\n";
	     
    }
    return 0;
}

  // } Driver Code Ends