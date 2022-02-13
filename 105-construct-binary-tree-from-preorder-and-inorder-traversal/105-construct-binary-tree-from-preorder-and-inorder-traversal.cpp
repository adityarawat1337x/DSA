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
      TreeNode* help(vector<int>& preorder, vector<int>& inorder,int l,int r) {
        if(l>r)
            return nullptr;
        TreeNode* root =new TreeNode(preorder[0]);
        preorder.erase(preorder.begin());
        auto it = find(inorder.begin(),inorder.end(),root->val);
        root->left = help(preorder,inorder,l,it-inorder.begin()-1);
        root->right = help(preorder,inorder,it-inorder.begin()+1,r);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        return help(preorder,inorder,0,preorder.size()-1);
    }
};