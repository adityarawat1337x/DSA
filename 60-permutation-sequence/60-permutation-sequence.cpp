class Solution {
public:
    int  arr[9]={1,2,3,4,5,6,7,8,9};
    int fact(int a){
        int ans=1;
        while(a){
            ans*=a;
            a--;
        }
        return ans;
    }
    
    void generate(int num,int &permu,int n,string ans,string &res){
        if(ans.size()==n){
            permu--;
            res=ans;
            return;
        }
        
        for(int i=0;i<n and permu;i++){
            if(arr[i]>0){
                ans.push_back('0'+arr[i]);
                arr[i]*=-1;
                generate(i,permu,n,ans,res);
                arr[i]*=-1;
                ans.pop_back();
            }
        }
        
    }
    string getPermutation(int n, int k) {
        int permu = fact(n);
        string res;
        generate(1,k,n,"",res);
        return res;
    }
};