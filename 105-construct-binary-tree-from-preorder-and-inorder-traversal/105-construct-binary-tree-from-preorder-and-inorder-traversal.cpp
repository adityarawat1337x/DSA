class Solution {
public:
    int j=0;
    unordered_map<int,int> um;
    TreeNode *fun(vector<int>& pre, vector<int>& in,int s,int e) {
        if(s>e)
            return nullptr;
        int m = um[pre[j]];
        TreeNode *root = new TreeNode(pre[j++]);
        root->left = fun(pre,in,s,m-1);
        root->right = fun(pre,in,m+1,e);
        

        return root;

    }

    TreeNode* buildTree(vector<int>& pre, vector<int>& in) {
        int n = pre.size();
        for(int i=0;i<n;i++)
            um[in[i]]=i;
        TreeNode *root  = fun(pre,in,0,n-1);
        return root;
    }
};