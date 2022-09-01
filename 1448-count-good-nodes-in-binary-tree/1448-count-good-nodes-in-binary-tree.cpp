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
    void solve(int &ans,TreeNode* root,int maxi){
        if(!root) return;
        
        if(root->val>=maxi)
            ans++;
        
        if(root->val>maxi)
            maxi=root->val;
        
        solve(ans,root->left,maxi);
        solve(ans,root->right,maxi);
    }
    
    int goodNodes(TreeNode* root) {
        if(!root) return 0;
        int ans=0,maxi=root->val;
        solve(ans,root,maxi);
        return ans;
    }
};