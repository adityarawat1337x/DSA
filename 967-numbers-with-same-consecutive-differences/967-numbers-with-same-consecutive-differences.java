class Solution {
    ArrayList<Integer> arr = new ArrayList<Integer>();
    int lim,diff;
    void solve(int num,int digits){
        if(digits==lim){
            arr.add(num);
            return;
        }
        
        if(digits>lim) return;
        
        int nex = num%10+diff, nex2 = num%10-diff;
        
        if(nex>-1 && nex<10)
            solve(num*10 + nex,digits+1);
        
        if(nex2>-1 && nex2<10 && nex!=nex2)
            solve(num*10 + nex2,digits+1);
    }
    
    public int[] numsSameConsecDiff(int n, int k) {
        lim = n;
        diff = k; 
        for(int i=1;i<10;i++)
            solve(i,1);
        for(int a:arr) System.out.print(a);
        return arr.stream().mapToInt(i -> i).toArray();
    }
}