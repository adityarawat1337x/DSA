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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        
        while(root){
            if(!root->left){
                ans.push_back(root->val);
                root = root->right;
            }else{
                TreeNode* thread = root->left;
                while(thread->right and thread->right!=root){
                    thread = thread->right;
                }
                if(!thread->right){
                    thread->right = root;
                    root=root->left;
                }else if(thread->right == root){
                    thread->right = NULL;
                    ans.push_back(root->val);
                    root=root->right;
                }
            }
            
            
        }
        
        return ans;
    }
    
    
};