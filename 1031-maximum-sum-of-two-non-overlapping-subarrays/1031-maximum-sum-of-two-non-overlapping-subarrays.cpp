class Solution {
public:
    int find(vector<int>& nums, int y,int x, int secondLen) {
        int ans=INT_MIN,sum=0;
        for(int i=0,j=0;i<x;i++){
            sum+=nums[i];
            if(i-j+1==secondLen){
                ans=max(ans,sum);
                sum-=nums[j];
                j++;
            }
        }
        sum=0;
        for(int i=y+1,j=y+1;i<nums.size();i++){
            sum+=nums[i];
            if(i-j+1==secondLen){
                ans=max(ans,sum);
                sum-=nums[j];
                j++;
            }
        }
        return ans;
    }
    
    int maxSumTwoNoOverlap(vector<int>& nums, int firstLen, int secondLen) {
        int ans=0,sum=0,x=0;
        for(int i=0,j=0;i<nums.size();i++){
            sum+=nums[i];
            if(i-j+1==firstLen){
                x = find(nums,i,j,secondLen);
                if(x!=INT_MIN)
                    ans=max(ans,sum+x);
                sum-=nums[j];
                j++;
            }
        }
        return ans;
    }
};