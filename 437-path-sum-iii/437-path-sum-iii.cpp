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
    long long ans=0;
    
    void itr(TreeNode* root, long long targetSum){
        if(!root)
            return ;
        if(root->val==targetSum)
            ans++;
        itr(root->left,targetSum-root->val);
        itr(root->right,targetSum-root->val);
    }
    
    int pathSum(TreeNode* root, int targetSum) {
        if(!root)
            return 0;
        itr(root,targetSum);
        pathSum(root->left,targetSum);
        pathSum(root->right,targetSum);
        return ans;
    }
};