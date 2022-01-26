// { Driver Code Starts
#include<bits/stdc++.h>
 
using namespace std; 


bool findPair(int arr[], int size, int n);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l,n;
        cin>>l>>n;
        int arr[l];
        for(int i=0;i<l;i++)
            cin>>arr[i];
        if(findPair(arr, l, n))
            cout<<1<<endl;
        else cout<<"-1"<<endl;
    }
    
  
    return 0;
}// } Driver Code Ends


bool findPair(int arr[], int size, int n){
  unordered_set<int>s;
  
  for(int i=0 ; i<size ; i++)
      s.insert(arr[i]);

  for(int i=0 ; i<size ; i++){
       if(arr[i] < n){
        if(s.find(n-arr[i]) != s.end())
          return true;
       }else if(arr[i] > n){
           if(s.find(arr[i]-n) != s.end())
           return true;
       }     
  } 
  return false;
}