// { Driver Code Starts
import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int tc = scan.nextInt();

        while (tc-- > 0) {
            int N = scan.nextInt();
            int M = scan.nextInt();
            int E = scan.nextInt();

            boolean graph[][] = new boolean[N][N];

            for (int i = 0; i < E; i++) {
                int u = scan.nextInt() - 1;
                int v = scan.nextInt() - 1;
                graph[u][v] = true;
                graph[v][u] = true;
            }

            System.out.println(new solve().graphColoring(graph, M, N) ? 1 : 0);
        }
    }
}
// } Driver Code Ends


class solve {
        
    public boolean isValid(int node, int []color, boolean [][]graph, int curr_color,int V){
        for(int i = 0; i < V; i++){
            if(i != node && color[i] == curr_color && graph[node][i] == true) return false;
        }
        return true;
    }
    public boolean helper(int node, int []color, boolean graph[][], int m,int V){
        if(node == V) return true;
        
        for(int i = 0; i < m; i++){
            if(isValid(node, color, graph, i, V)){
                color[node] = i;
                if(helper(node + 1, color, graph, m, V)) return true;
                color[node] = -1;
            }
        }
        return false;
    }
    public boolean graphColoring(boolean graph[][], int m, int n) {
        int color[] = new int[n];
        Arrays.fill(color,-1);
        return helper(0, color, graph, m,n);
    }
    


}