class Solution {
public:
    unsigned long int catalan(unsigned int n,vector<int> &memo)
{
    if (n <= 1)
        return 1;
    if(memo[n]!=-1)
        return memo[n];
        
    unsigned long int res = 0;
    for (int i = 0; i < n; i++)
        res += catalan(i,memo)
            * catalan(n - i - 1,memo);
 
    return memo[n]=res;
}

    
    int numTrees(int n) {
        vector<int> memo(n+1,-1);
        return catalan(n,memo);
    }
};