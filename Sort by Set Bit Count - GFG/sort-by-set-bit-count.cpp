// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    
    static int cntbits(int n){
        if(n==0)
            return n;
        
        return 1+ cntbits(n & (n-1));
    }
    
    static bool comp(int a,int b){
        int cntA =cntbits(a),cntB = cntbits(b);
        return cntA>cntB;
    }
    
    void sortBySetBitCount(int arr[], int n)
    {
        //stable_sort(arr,arr+n,comp);
       multimap<int,int>m;
       for(int i=n-1;i>=0;--i){
       int count=__builtin_popcount(arr[i]);
       m.insert(make_pair(count,arr[i]));
       }
       int i=0;
       for(auto it=m.begin();it!=m.end();it++){
           arr[n-1-i]=it->second;
           i++;
       }
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        Solution ob;
        ob.sortBySetBitCount(arr, n);
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
    return 0;
}
  // } Driver Code Ends