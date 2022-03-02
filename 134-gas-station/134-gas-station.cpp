class Solution {
public:
    int check(vector<int>& gas, vector<int>& cost,int idx){
        int n=gas.size();
        int k=n;
        int gasLeft=0;
        while(k--){
            if(gasLeft<0)
                return -1;
            gasLeft+=gas[idx]-cost[idx];
         
            idx=(idx+1)%n;
        }
        
        return (gasLeft>=0)?idx:-1;
    }
    
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int diff=INT_MIN,idx=-1;
        int n=gas.size();
        vector<int> v(n);

        for(int i=0;i<gas.size();i++){
            v[i]=i;
        }
        
        sort(v.begin(),v.end(),[&](auto &a,auto &b){
            return (gas[a]-cost[a]) > (gas[b]-cost[b]);
        });
        
        for(auto i:v){
            if(check(gas,cost,i)==i){
                return i;
            }
        }
        
        return -1;
      
    }
};