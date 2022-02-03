// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function template for C++

class Solution{
    public:
    bool valid(vector<vector<int>> &m,vector<vector<bool>> &vis,int i,int j){
        if(i<0 or j<0 or i>=m.size() or j>=m.size() or m[i][j]==0 or vis[i][j])
            return false;
        return true;
    }
    
    void solve(vector<vector<int>> &m,vector<vector<bool>> &vis,vector<string> &ans,string s,int i,int j){
    
        if(i==m.size()-1. and j==m.size()-1){
            ans.push_back(s);
            return;
        }
        
        vis[i][j]=true;
        
        if(valid(m,vis,i-1,j)){
            solve(m,vis,ans,s+'U',i-1,j);
        }
        
        if(valid(m,vis,i,j-1)){
            solve(m,vis,ans,s+'L',i,j-1);
        }
              
        if(valid(m,vis,i+1,j)){
            solve(m,vis,ans,s+'D',i+1,j);
        }
        
        if(valid(m,vis,i,j+1)){
            solve(m,vis,ans,s+'R',i,j+1);
        }
        
        vis[i][j]=false;
    }
    
    vector<string> findPath(vector<vector<int>> &m, int n) {
        vector<string> ans;
        vector<vector<bool>> vis(m.size(),vector<bool>(m.size(),false));
        if(valid(m,vis,0,0))
            solve(m,vis,ans,"",0,0);
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
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends