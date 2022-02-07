class Solution {
public:
    int  arr[10]={0,1,2,3,4,5,6,7,8,9};
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
        
        for(int i=1;i<=n and permu;i++){
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
        string res;
        int permu = fact(n-1);
        int num = ceil((float)k/(float)permu);
        k = k - permu*(num-1);
        cout<<num<<" "<<k;
        arr[num]*=-1;
        generate(num,k,n,to_string(num),res);
        return res;
    }
};