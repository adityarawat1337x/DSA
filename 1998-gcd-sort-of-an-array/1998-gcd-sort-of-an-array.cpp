class Solution {
public:
    vector<int>parent;
    vector<int>size;
    int findPar(int x){
        if(parent[x]==x){
            return parent[x];
        }
        return parent[x]=findPar(parent[x]);
    }
    void unionn(int x,int y){
        x=findPar(x);
        y=findPar(y);
        if(size[x]<=size[y]){
            parent[x]=y;
            size[y]++;
        }
        else if(size[y]<size[x]){parent[y]=x;size[x]++;}
        
    }
	//n=100000
    void Sieve(int n,vector<int>& nums,vector<int>&mp){
        vector<bool>prime(n,true);
        for(int i=2;i<=n;i++){
            if(prime[i]){
                int pre=i;
                for(int j=i;j<=n;j+=i){
                   prime[j]=false;
                   if(mp[j]>0){//to check whether j is present in our nums array
                       unionn(pre,j);
                       pre=j;
                   }
                }
            }
        }
    }
    bool gcdSort(vector<int>& nums) {
        int n=100000;
        //to check whether j is present in our nums array
        vector<int>mp(1e5+5,0);
        for(auto x:nums)mp[x]=1;
        for(int i=0;i<=100000;i++){parent.push_back(i);size.push_back(1);}
        vector<int>sortednum=nums;
        sort(sortednum.begin(),sortednum.end());
        Sieve(n,nums,mp);
        for(int i=0;i<nums.size();i++){
            if(sortednum[i]!=nums[i] && findPar(sortednum[i])!=findPar(nums[i]))return false;
        }
        return true;
    }
};