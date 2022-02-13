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
    unordered_map<int,int> mp;
public:
      TreeNode* help(vector<int>& preorder, vector<int>& inorder,int l,int r) {
        if(l>r)
            return nullptr;
        TreeNode* root =new TreeNode(preorder[0]);
        preorder.erase(preorder.begin());
        auto it = mp[root->val];
        root->left = help(preorder,inorder,l,it-1);
        root->right = help(preorder,inorder,it+1,r);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        for(int i=0;i<inorder.size();i++){
            mp[inorder[i]]=i;
        }
        return help(preorder,inorder,0,preorder.size()-1);
    }
};