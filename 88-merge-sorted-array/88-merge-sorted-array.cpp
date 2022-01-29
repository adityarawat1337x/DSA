class Solution {
public:
    void arrange(vector<int>& arr){
        for(int i=0;i<arr.size()-1;i++){
            if(arr[i]>arr[i+1])
                swap(arr[i],arr[i+1]);
        }
    }
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int n1=0,n2=0;
        if(n==0)
            return;
        while(n1<m){
            if(nums1[n1]>nums2[n2]){
                swap(nums1[n1],nums2[n2]);
                arrange(nums2);
            }
            n1++;
        }
        
        while(n1<m+n){
            nums1[n1]=nums2[n2];
            n1++;
            n2++;
        }
    }
};