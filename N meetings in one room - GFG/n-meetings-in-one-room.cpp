// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
    public:

    int maxMeetings(int start[], int end[], int n){
        pair<int,int> p[n];
        for(int i=0;i<n;i++){
            p[i]={end[i],start[i]};
        }
        sort(p,p+n);
        
        int ans=0,prev=-1;
        for(int i=0;i<n;i++){
            if(prev<p[i].second){
                ans++;
                prev=p[i].first;
            }
        }
        
        return ans;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int start[n], end[n];
        for (int i = 0; i < n; i++) cin >> start[i];

        for (int i = 0; i < n; i++) cin >> end[i];

        Solution ob;
        int ans = ob.maxMeetings(start, end, n);
        cout << ans << endl;
    }
    return 0;
}  // } Driver Code Ends