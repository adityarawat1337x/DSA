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
    vector<int> ans;
public:
    vector<int> preorderTraversal(TreeNode* root) {
        
        while(root){
            if(!root->left){
                ans.push_back(root->val);
                root=root->right;
            }else{
                TreeNode* link = root->left;
                while(link->right and link->right!=root)
                        link=link->right;
                if(not link->right){
                    link->right = root;
                    ans.push_back(root->val);
                    root=root->left;
                }else{
                    link->right = NULL;
                    root=root->right;
                }
            }
        }
        return ans;
    }
};