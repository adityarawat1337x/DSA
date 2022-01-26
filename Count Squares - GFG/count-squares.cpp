// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    int countSquares(int N) {
        long long l=1,r=N/2,m;
        if (N == 0 || N == 1)
            return N-1;
        while(l<=r){
            m = l+ (r-l)/2;
            long sq = m*m;
            if(sq==N)
                return m-1;
            if(sq>N)
                r=m-1;
            else
                l=m+1;
        }
        return l-1;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;

        Solution ob;
        cout << ob.countSquares(N) << endl;
    }
    return 0;
}  // } Driver Code Ends