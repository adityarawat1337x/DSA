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
    int solve(TreeNode* root){
        if(!root) return 0;
        int l = solve(root->left);
        int r = solve(root->right);
        if(!l) root->left=NULL;
        if(!r) root->right=NULL;
        if(!l and !r and root->val==0) return 0;
        return 1;
    }
    TreeNode* pruneTree(TreeNode* root) {
        int x = solve(root);
        if(!x) return NULL;
        return root;
    }
};