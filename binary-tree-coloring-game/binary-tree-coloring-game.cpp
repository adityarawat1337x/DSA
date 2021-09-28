/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int dfs(TreeNode* root,int x,int &left,int &right){
        if(!root)
            return 0;
        int l = dfs(root->left,x,left,right);
        int r = dfs(root->right,x,left,right);
        if(root->val==x){
             left=l;
            right=r; 
        }
       return l+r+1;
        
    }
    bool btreeGameWinningMove(TreeNode* root, int n, int x) {
        int l,r;
        int cn = dfs(root,x,l,r);
        return max(max(l,r),cn-l-r-1) > cn/2;
    }
};