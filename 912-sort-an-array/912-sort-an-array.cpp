class Solution {
public:
    /*void quick(vector<int>& nums,int l,int r){
        if(l<r){
            swap(nums[l + rand() % (r - l + 1)], nums[l]);
            int x = part(nums,l,r);
            quick(nums,l,x-1);
            quick(nums,x+1,r);
        }
    }
    
    int part(vector<int>& nums,int l,int r){
        int pivot=nums[l];
        int i=l,j=r;
        while(i<j){
            while(i<nums.size() and nums[i]<=pivot)i++;
            while(j>-1 and nums[j]>pivot)j--;
            if(i<j)
                swap(nums[i],nums[j]);
        }

        swap(nums[l],nums[j]);
        return j;
    }
    */
    
    void count(vector<int> &nums){
        map<int,int> mp,pos;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        auto it=mp.begin();
        for(int i=0;i<nums.size();i++){
            if(!it->second)
                it++;
            nums[i]=it->first;
            mp[it->first]--;
        }
        
    }
    
    vector<int> sortArray(vector<int>& nums) {
        //quick(nums,0,nums.size()-1);
        count(nums);
        return nums;
    }
};