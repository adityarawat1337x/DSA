class Solution {
public:
    int maxEqualFreq(vector<int>& nums) {
        int freqofNum[100001]={0},freqofreq[100001]={0};
        int ans=0,maxFreq=INT_MIN;
        for(int i=0;i<nums.size();i++){
            int num=nums[i];
            freqofNum[num]++;
            freqofreq[freqofNum[num]]++;
            
            maxFreq=max(maxFreq,freqofNum[num]);
            
            if( (freqofreq[maxFreq]==1 && maxFreq+(maxFreq-1)*(freqofreq[maxFreq-1]-1) == i+1 ) or 
                (freqofreq[maxFreq]*maxFreq + 1 == i+1))
                ans=i+1;
        }

        if(maxFreq==1)
            return nums.size();
        return ans;
    }
};
