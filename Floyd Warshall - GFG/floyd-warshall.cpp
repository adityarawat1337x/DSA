// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution {
  public:
	void shortest_distance(vector<vector<int>>&mat){
	    int V = mat.size();
	    for(int by=0;by<V;by++){
	        for(int src=0;src<V;src++){
	            for(int dst=0;dst<V;dst++){
	                if(mat[src][dst]==-1 and mat[src][by]>-1 and mat[by][dst]>-1){
	                    mat[src][dst] = mat[src][by]+mat[by][dst];
	                }
	                else if(mat[src][by]>-1 and mat[by][dst]>-1 and mat[src][by]+mat[by][dst]<mat[src][dst])
	                    mat[src][dst] = mat[src][by]+mat[by][dst];
	            }
	        }
	    }
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>matrix(n, vector<int>(n, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> matrix[i][j];
			}
		}
		Solution obj;
		obj.shortest_distance(matrix);
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cout << matrix[i][j] << " ";
			}
			cout << "\n";
		}
	}
	return 0;
}  // } Driver Code Ends