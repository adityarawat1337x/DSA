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

    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        queue<TreeNode*> q;
        q.push(nullptr);
        q.push(root);
        while(q.size()>1){
            auto x = q.front();
            q.pop();
            if(x==NULL){
                x = q.front();
                q.pop();
                if(x) ans.push_back(x->val);
                q.push(nullptr);
            }
            if(x and x->right)q.push(x->right);
            if(x and x->left)q.push(x->left);
        }
        return ans;
    }
};