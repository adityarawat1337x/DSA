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
    int mp[6001];
public:
      TreeNode* help(vector<int>& preorder, vector<int>& inorder,int l,int r) {
        if(l>r)
            return nullptr;
        TreeNode* root =new TreeNode(preorder[0]);
        preorder.erase(preorder.begin());
        int it = root->val>=0?mp[root->val]:mp[6000+root->val];
        root->left = help(preorder,inorder,l,it-1);
        root->right = help(preorder,inorder,it+1,r);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        for(int i=0;i<inorder.size();i++){
            if(inorder[i]<0)
                  mp[6000+inorder[i]]=i;
            else mp[inorder[i]]=i;
        }
        return help(preorder,inorder,0,preorder.size()-1);
    }
};