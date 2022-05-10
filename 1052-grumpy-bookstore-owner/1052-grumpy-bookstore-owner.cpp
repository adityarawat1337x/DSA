class Solution {
public:
    int maxSatisfied(vector<int>& cus, vector<int>& gru, int minutes) {
        int ans=0,maxi=0,sum=0;
        for(int i=0;i<gru.size();i++){
            if(!gru[i]){
                ans+=cus[i];
                cus[i]=0;
            }
        }
        for(int i=0,j=0;j<cus.size();j++){
            sum+=cus[j];
            if(j-i+1==minutes){
                maxi = max(maxi,sum);
                sum-=cus[i++];
            }
        }
        
        return ans+maxi;
        
    }
};