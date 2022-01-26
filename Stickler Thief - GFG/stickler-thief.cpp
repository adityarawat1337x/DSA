// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

 // } Driver Code Ends
class Solution
{
    public:
    int dp[10001];
    
    
    int loot(int arr[],int n,int idx){
        if(idx>=n)
            return 0;
        if(dp[idx]!=-1)
            return dp[idx];
        return dp[idx] =  max(arr[idx] + loot(arr,n,idx+2),loot(arr,n,idx+1));
    }
    
    //Function to find the maximum money the thief can get.
    int FindMaxSum(int arr[], int n)
    {
        memset(dp,-1,sizeof(dp));
        return loot(arr,n,0);
    }
};

// { Driver Code Starts.
int main()
{
    //taking total testcases
	int t;
	cin>>t;
	while(t--)
	{
	    //taking number of houses
		int n;
		cin>>n;
		int a[n];
		
		//inserting money of each house in the array
		for(int i=0;i<n;++i)
			cin>>a[i];
		Solution ob;
		//calling function FindMaxSum()
		cout<<ob.FindMaxSum(a,n)<<endl;
	}
	return 0;
}
  // } Driver Code Ends