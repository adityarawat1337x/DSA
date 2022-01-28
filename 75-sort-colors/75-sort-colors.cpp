class Solution {
public:
    void sortColors(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        int l=0,m=0,r=nums.size()-1;
      
        while(m<=r){
            if(nums[m]==1)
                m++;
            else if(nums[m]==0){
                swap(nums[m++],nums[l++]);
            }else{
                swap(nums[m],nums[r--]);
            }
        }
    }
};