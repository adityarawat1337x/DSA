// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    static bool compare(int x,int y)
   {
       int count_x=0,count_y=0;
       while(x>0)
       {
           ++count_x;
           x=x&(x-1);
       }
       while(y>0)
       {
           ++count_y;
           y=y&(y-1);
       }
       if(count_x!=count_y)
           return(count_x>count_y);
       return x<y;    
   }
   void sortBySetBitCount(int arr[], int n)
   {
       // Your code goes here
       stable_sort(arr,arr+n,compare);
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