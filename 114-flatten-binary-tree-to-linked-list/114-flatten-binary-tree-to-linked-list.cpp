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
    pair<TreeNode*,TreeNode*> create(TreeNode* root){
        if(!root or (!root->left and !root->right))
            return {root,root};
        
        if(!root->left)
            return {root,create(root->right).second};
        
        if(!root->right){
            auto l = create(root->left);
            root->left=nullptr;
            root->right=l.first;
            return {root,l.second};
        }
        
        
        auto l = create(root->left);
        auto r = create(root->right);
        root->left=nullptr;
        root->right = l.first;
        auto tmp = l.second;
        tmp->right = r.first;
        tmp = r.second;
        return {root,tmp};
    }
    
    void flatten(TreeNode* root) {
        create(root);
    }
};