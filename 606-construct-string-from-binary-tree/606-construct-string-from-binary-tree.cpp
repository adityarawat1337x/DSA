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
    string tree2str(TreeNode* root) {
        if(!root) return "";
        string s=to_string(root->val);
        auto x=tree2str(root->left);
        auto y=tree2str(root->right);
        if(y!=""){
            s+='(';
            s+=x;
            s+=')';
            s+='(';
            s+=y;
            s+=')';
        }
        else if(x!=""){
            s+='(';
            s+=x;
            s+=')';
        }
        return s;
    }
};