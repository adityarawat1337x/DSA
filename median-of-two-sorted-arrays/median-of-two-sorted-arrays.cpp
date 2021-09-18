class Solution {
public:
    double findMedianSortedArrays(vector<int>& n1, vector<int>& n2) {
        if(n1.size()>n2.size())return findMedianSortedArrays(n2,n1);
        int s1=n1.size(),s2=n2.size();
        int low=0,high=s1;

        while(low<=high){
            int par1 = (high+low)>>1;
            int par2 = (s1+s2+1)/2-par1;
            int l1 = par1==0?INT_MIN:n1[par1-1];
            int l2 = par2==0?INT_MIN:n2[par2-1];
            int r1 = par1==s1?INT_MAX:n1[par1];
            int r2 = par2==s2?INT_MAX:n2[par2];
            
            if(l1<=r2 && l2<=r1){
                if((s1+s2)%2!=0)
                    return max(l1,l2);
                else return (max(l1,l2)+min(r1,r2))/2.0;
            }
            
            if(l1>r2)
                high=par1-1;
            else
                low=par1+1;
        }
    return 0;
    }
};