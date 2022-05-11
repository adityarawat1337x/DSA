class Solution {
public:
    /*
      int pos=0,neg=0;
        while(pos<nums.size()){
            if(nums[pos]>0)
                break;
            pos++;
        }
        while(neg<nums.size()){
            if(nums[neg]<0)
                break;
           neg++;
        }
        for(int i=0;i<nums.size();i++){
            if(i%2==0 and pos<nums.size()){
                if(nums[i]<0)swap(nums[pos],nums[i]);
                pos+=2;
            }else if(neg<nums.size()){
                 if(nums[i]>0)swap(nums[neg],nums[i]);
                neg+=2;
            }
        }
        return nums;
        */
    vector<int> rearrangeArray(vector<int>& nums) {
       vector<int> a,b;
        for(auto i:nums)
            if(i>0)
                a.push_back(i);
        else b.push_back(i);
        
        int ai=0,bi=0;
        int i=0;
        while(i<nums.size())
            if(i%2==0)
                nums[i++]=a[ai++];
            else
                nums[i++]=b[bi++];
        return nums;
    }
};