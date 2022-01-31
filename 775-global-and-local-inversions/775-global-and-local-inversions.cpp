class Solution {
public:
    /*int merge(vector<int>& arr,vector<int> tmp,int low,int mid,int high){
        int global=0;
        int p1=low,p2=mid,t=low;
        
        while(p1<mid and p2<=high){
            if(arr[p1]<=arr[p2])
                tmp[t++]=arr[p1++];
            else{
                tmp[t++]=arr[p2++];
                global+=mid-p1;
            }
        }
        
        while(p1 < mid)
            tmp[t++] = arr[p1++];

        while(p2 <= high)
            tmp[t++] = arr[p2++];

        for(int i = low ; i <= high ; i++)
            arr[i] = tmp[i];

        return global;
    }
    
    int mergeMod(vector<int>& nums,vector<int> tmp,int low,int high){
        int global = 0;
        if(low<high){
            int mid = low+(high-low)/2;
            global+= mergeMod(nums,tmp,low,mid); 
            global+= mergeMod(nums,tmp,mid+1,high); 
            global+= merge(nums,tmp,low,mid+1,high);
        }
        return global;
    }
    
    */
    
int merge(vector<int>& arr,vector<int> temp,int left,int mid,int right)
{
    int inv_count=0;
    int i = left;
    int j = mid;
    int k = left;
    while((i <= mid-1) && (j <= right)){
        if(arr[i] <= arr[j]){
            temp[k++] = arr[i++];
        }
        else
        {
            temp[k++] = arr[j++];
            inv_count = inv_count + (mid - i);
        }
    }

    while(i <= mid - 1)
        temp[k++] = arr[i++];

    while(j <= right)
        temp[k++] = arr[j++];

    for(i = left ; i <= right ; i++)
        arr[i] = temp[i];
    
    return inv_count;
}

int merge_Sort(vector<int>& arr,vector<int> temp,int left,int right)
{
    int mid,inv_count = 0;
    if(right > left)
    {
        mid = (left + right)/2;

        inv_count += merge_Sort(arr,temp,left,mid);
        inv_count += merge_Sort(arr,temp,mid+1,right);

        inv_count += merge(arr,temp,left,mid+1,right);
    }
    return inv_count;
}
    
    bool isIdealPermutation(vector<int>& A) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        
        for (int i = 0; i < A.size(); i++) {
            if (abs(i - A[i]) > 1)
                return false;
        }

        return true;
    
    }
};