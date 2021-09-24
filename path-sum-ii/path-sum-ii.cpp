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
            void solve(vector<vector<int>> &ans,vector<int> tmp,TreeNode* root,int targetSum,int sum){
        if(!root)
            return;
        if(root->val+sum==targetSum)
            if(!root->left && !root->right){
                tmp.push_back(root->val);
                ans.push_back(tmp);
            return;
            }
        
        sum+=root->val;
        tmp.push_back(root->val);
        solve(ans,tmp,root->left,targetSum,sum);
        solve(ans,tmp,root->right,targetSum,sum);
    }
public:
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> ans;
        solve(ans,{},root,targetSum,0);
  
        return ans;
    }
    
};