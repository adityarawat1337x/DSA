class Solution {
public:
    int check(vector<int>& nums, int x,int mx){
        for(int i=0;i<nums.size();i++){
            if(nums[i]>x){
                if(nums[i]%x==0)
                    mx=mx-((nums[i]/x)-1);
                else mx=mx-(nums[i]/x); 
            }
        }
        return mx;
    }

    int minimumSize(vector<int>& nums, int mx) {
        int l = 1,r = *max_element(nums.begin(),nums.end());
        int ans=INT_MAX;

        while(l<=r){
            int m=(l+r)/2;
            int ops = check(nums,m,mx);
            if(ops>=0){
                ans=min(ans,m);
                r=m-1;
            }else {
                l=m+1;
            }
        }

        return ans;
    }
};