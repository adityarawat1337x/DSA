class Solution {
public:
    vector<int> dp;
 /*   bool solve(int idx,int b1,int b2,int b3,int b4,vector<int> &ms){
        if(idx==ms.size()){
            return (b1==b2 and b2==b3 and b3==b4);
        }
        if(solve(idx+1,b1+ms[idx],b2,b3,b4,ms) or solve(idx+1,b1,b2+ms[idx],b3,b4,ms) or solve(idx+1,b1,b2,b3+ms[idx],b4,ms) or solve(idx+1,b1,b2,b3,b4+ms[idx],ms))
            return true;
        return false;
    }
    
    bool makesquare(vector<int>& ms) {
        int sum = accumulate(ms.begin(),ms.end(),0);
        if(sum%4!=0)
            return false;
        int b1=0,b2=0,b3=0,b4=0;
        if(solve(0,b1,b2,b3,b4,ms))
            return true;
        return false;
    }*/
      bool DFS(int i,vector<int>&m,int s1,int s2,int s3, int s4,int taken){
        
        if(s1==0 and s2==0 and s3==0 and s4==0 and i==m.size())
            return true;    
        
        if(s1<0 || s2<0 || s3<0 || s4<0 or i>=m.size())
            return false;
  
        return  
            DFS( i+1,m,s1-m[i], s2, s3, s4,taken|(1<<i)) or 
            DFS( i+1,m,s1, s2-m[i], s3, s4,taken|(1<<i)) or 
            DFS( i+1,m,s1, s2, s3-m[i], s4,taken|(1<<i)) or 
            DFS( i+1,m,s1, s2, s3, s4-m[i],taken|(1<<i));
    }
    bool makesquare(vector<int>& m) {
        int sum=0;
        for(int i=0;i<m.size();i++){
            sum+=m[i];
        }
        vector<int> vs(65536,-1); 
        dp=vs;
        if(sum%4!=0)
            return false;
        sort( m.begin() , m.end() , greater<int>());
        int n=m.size();
        return DFS(0,m,sum/4,sum/4,sum/4,sum/4,0);
    }
};