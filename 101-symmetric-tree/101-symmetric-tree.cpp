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
    string itr2(TreeNode* root){
        if(!root)
            return "n";
        string l = itr2(root->left);
        string r = itr2(root->right);
        return " "+r+"_"+to_string(root->val)+"_"+l+" ";
    }
    string itr(TreeNode* root){
        if(!root)
            return "n";
        string l = itr(root->left);
        string r = itr(root->right);
        return " "+l+"_"+to_string(root->val)+"_"+r+" ";
    }
    
    bool isSymmetric(TreeNode* root) {
        string l = itr(root->left);
        string r = itr2(root->right);
        return l==r;
    }
};