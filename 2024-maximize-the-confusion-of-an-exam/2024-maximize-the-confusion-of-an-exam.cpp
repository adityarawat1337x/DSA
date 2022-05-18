class Solution {
public:
    int confuse(string nums, int k,char a){
        int ans=0;
        for(int i=0,j=0;j<nums.size();j++){
            if(nums[j]!=a)
                k--;
            while(i<j and k<0){
                if(nums[i++]!=a)
                    k++;
            }
            ans = max(ans,j-i+1);
        }
        return ans;
    }
    
    int maxConsecutiveAnswers(string answerKey, int k) {
        return max(confuse(answerKey,k,'T'),confuse(answerKey,k,'F'));
    }
};