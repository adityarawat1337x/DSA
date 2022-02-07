// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//Function to determine if graph can be coloured with at most M colours such
//that no two adjacent vertices of graph are coloured with same colour.

bool valid(bool mat[101][101],int n,int c,vector<int> &col,int V){
    for(int i = 0; i < V ; i ++){
        if(i == n) 
            continue;
        if(mat[n][i] == 1 and col[i] == c )
            return false;
    }
    return true;
}

bool coloring(bool mat[101][101],int n,vector<int> &col,int V,int m){
     if( n == V )
        return true; 
        
     for(int i  = 0 ; i <  m ; i ++){
        if(valid(mat,n,i,col,V)){
            col[n] = i;
            if(coloring(mat , n + 1 , col , V , m)) 
                return true;
            col[n] = -1; 
         }
        }
    return false;
}

bool graphColoring(bool graph[101][101], int m, int V)
{
    vector<int> col(V,-1);
    return coloring(graph,0,col,V,m);
}


// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, e;
        cin >> n >> m >> e;
        int i;
        bool graph[101][101];
        for (i = 0; i < n; i++) {
            memset(graph[i], 0, sizeof(graph[i]));
        }
        for (i = 0; i < e; i++) {
            int a, b;
            cin >> a >> b;
            graph[a - 1][b - 1] = 1;
            graph[b - 1][a - 1] = 1;
        }
        cout << graphColoring(graph, m, n) << endl;
    }
    return 0;
}
  // } Driver Code Ends