// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution 
{
    public:
    //Function to find the minimum number of swaps required to sort the array. 
	int minSwaps(vector<int>& arr)
	{
	    int n=arr.size();
	    //cooooooolllllll
	    vector<pair<int,int>> vp;
	     for(int i=0;i<n;i++){
	         vp.push_back({arr[i],i});
	     }
	     
	    sort(vp.begin(),vp.end());
	     
	    vector<bool> vis(n,false);
	    int ans=0;
	    for(int i=0;i<n;i++){
	        if(vis[i] || vp[i].second==i)
	            continue;
	        int j=i,cycle=0;
	        while(!vis[j]){
	            vis[j]=true;
	            cycle++;
	            j = vp[j].second;
	        }
	        if(cycle>0)
	            ans+=(cycle-1);
	    }
	    
	    return ans;
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)
			cin >> nums[i];
		Solution obj;
		int ans = obj.minSwaps(nums);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends