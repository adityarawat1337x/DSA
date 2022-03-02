/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
     void inorder(TreeNode* root,int k,vector<int> &ans){
        if(!root)
            return;
          
        if(k==0){
            ans.push_back(root->val);
            return;
        }
         
        inorder(root->left,k-1,ans);  
        inorder(root->right,k-1,ans);
    }
    
    int upper(TreeNode* root,TreeNode* target,int k,vector<int> &ans){
        if(!root)
            return -1;
        
        if(k==0){
            ans.push_back(root->val);
            return -1;
        }
        
        if(root==target)
            return k-1;
        
        int l = upper(root->left,target,k,ans);  
        int r = upper(root->right,target,k,ans);
        
        if(l!=-1){
            if(l==0)
                ans.push_back(root->val);
            else
                inorder(root->right,l-1,ans);
             return l-1;
                
        }else if(r!=-1){
            if(r==0)
                ans.push_back(root->val);
            else
                inorder(root->left,r-1,ans);
            return r-1;
        }
        return -1;
        
    }
    
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        vector<int> ans;
        if(k==0){
            ans.push_back(target->val);
            return ans;
        }
        inorder(target,k,ans);
        int x = upper(root,target,k,ans);
        return ans;
    }
};