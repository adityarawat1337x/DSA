class Solution {
public:
    
    string getLCS(string s1,string s2){
        int n=s2.size(),m = s1.size();
        int L[m+1][n+1];
        for(int i=0;i<m+1;i++)
        for(int j=0;j<n+1;j++){
            if(i==0 || j==0){
                L[i][j]=0;
            }else if(s1[i-1]==s2[j-1])
                L[i][j]=1+L[i-1][j-1];
            else
                L[i][j]=max(L[i-1][j],L[i][j-1]);
        }
        
        string ans(m+n-L[m][n],' ');
        int i=m,j=n,idx=ans.size()-1;
        
        while(i>0 && j>0){
            if(s1[i-1]==s2[j-1]){
                ans[idx]=s1[i-1];
                i--;
                j--;
                idx--;
            }else if(L[i-1][j]>L[i][j-1]){
                ans[idx]=s1[i-1];
                idx--;
                i--;
            }
            else {
                ans[idx]=s2[j-1];
                idx--;
                j--;
            }
        }
        
        while(i>0){
            ans[idx]=s1[i-1];
            idx--;
            i--;
        }
        while(j>0){
            ans[idx]=s2[j-1];
            idx--;
            j--;
        }
        
        return ans;
    }
    
    string shortestCommonSupersequence(string str1, string str2) {
        return getLCS( str1, str2);
    }
    
};