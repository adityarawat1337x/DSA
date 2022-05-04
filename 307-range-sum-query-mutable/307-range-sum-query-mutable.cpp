class NumArray {
public:
    vector<int>tree;
    int n;
    void build(int node,int s,int e,vector<int> &nums){
        if(s==e)
            tree[node]=nums[e];
        else{
            int m = (s+e)/2;
            build(node*2,s,m,nums);
            build(node*2+1,m+1,e,nums);
            tree[node]=tree[node*2]+tree[node*2+1];
        }
    }
    int find(int node,int s,int e,int l,int r){
        if(l>r)
            return 0;
        
        if(l==s and r==e)
            return tree[node];
        else{
            int m = (s+e)/2;
            return find(2*node,s,m,l,min(r,m))+find(node*2+1,m+1,e,max(l,m+1),r);
        }
    }

    void change(int node,int s,int e,int index, int val) {
        if(s==e){
            tree[node] = val; 
        }else{
            int m = (s+e)/2;
            if(index<=m)
                change(node*2,s,m,index,val);
            else 
                change(node*2+1,m+1,e,index,val);            
            tree[node]=tree[node*2]+tree[node*2+1];
        }
    }
    
    NumArray(vector<int>& nums) {
        n=nums.size();
        tree.resize(n*4,0);   
        build(1,0,n-1,nums);
    }
    
    void update(int index, int val) {
        change(1,0,n-1,index,val); 
    }
    
    int sumRange(int left, int right) {
        return find(1,0,n-1,left,right);
    }
};



/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * obj->update(index,val);
 * int param_2 = obj->sumRange(left,right);
 */