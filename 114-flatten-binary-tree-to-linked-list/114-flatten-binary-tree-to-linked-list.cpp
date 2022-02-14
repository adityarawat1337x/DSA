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
    TreeNode* create(TreeNode* root,TreeNode* super){
       if(!root or !super)
           return super;
        super->left=NULL;
        super->right=root;
        TreeNode* tmp = root->right;
        TreeNode* l = create(root->left,root);
        TreeNode* r = create(tmp,l);
        return r;
    }
    
    void flatten(TreeNode* root) {
        TreeNode* super = new TreeNode(0);
        create(root,super);
    }
};