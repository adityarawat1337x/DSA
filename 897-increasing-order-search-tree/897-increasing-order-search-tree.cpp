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
     TreeNode* itr(TreeNode* root){
        if(!root)
            return NULL;
        root->right = itr(root->right);
        TreeNode* left =  itr(root->left);
        TreeNode* tmp = left;
        while(tmp and tmp->right)
            tmp=tmp->right;
        if(tmp){
            root->left=NULL;
            tmp->right = root;
        }
        if(left)
            return left;
        return root;
    }
    TreeNode* increasingBST(TreeNode* root) {
        return itr(root);
    }
};