class Solution {
public:
    int minMoves2(vector<int>& nums) {
          if(nums.size()<=1)
            return 0;
        sort(nums.begin(),nums.end());
        int median,mid = (nums.size()-1)/2;
        if(nums.size()%2==0){
           median = (nums[mid]+nums[mid+1])/2;
        }else{
            median = (nums[mid]);
        }
        int ans=0,n=nums.size();
        for(int i=0;i<n/2;i++){
            ans+=nums[n-i-1]-nums[i];
        }
        return ans;
    }
};
