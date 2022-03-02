class Solution {
public:

    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int gasLeft=0,total=0;
        int ans=0;
        for(int i=0;i<gas.size();i++){
             gasLeft+=gas[i]-cost[i];
             total+=gas[i]-cost[i];
            if(gasLeft<0){
                ans=i+1;
                gasLeft=0;
            }
        }
        
        return (total>=0)?ans:-1;
    }
};