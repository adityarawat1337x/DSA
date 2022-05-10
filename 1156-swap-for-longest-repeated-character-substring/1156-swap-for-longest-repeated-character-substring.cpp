class Solution {
public:
    int scan(string nums,char x){
        int invalid=0, ans=0,rem=0,used=0;
        for(int j=0;j<nums.size();j++){
            if(nums[j]==x)
                rem++;
        }
        int i=0,j=0;
        while(nums[j]!=x and j<nums.size())
            i++,j++;
        
        for(;j<nums.size();j++){
            if(nums[j]==x){
                used++;
                rem--;
            }
            else if(invalid<=0)
                invalid++;
            else{
                while(nums[i]==x){
                    rem++;
                    used--;
                    i++;
                }
                i++;
            }
            ans = max(ans,(invalid==0)?j-i+1:(rem>0)?j-i+1:j-i);
        }
        return ans;
    }
    
    int maxRepOpt1(string text) {
        // O(26n)
        int ans=0;
        for(char x='a';x<='z';x++){
            ans = max(ans,scan(text,x));
        }
        return ans;
    }
};