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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(!root)
            return ans;
        queue<TreeNode*> q;
        q.push(root);
        bool rev=true;
        while(!q.empty()){
            rev=!rev;
            int size = q.size();
            vector<int> tmp;
            
            for(int i=0;i<size;i++){
                auto x = q.front();
                q.pop();
                tmp.push_back(x->val);
                if(x->left)
                    q.push(x->left);
                if(x->right)
                    q.push(x->right);
                
            }
            if(rev)
                reverse(tmp.begin(),tmp.end());
            ans.push_back(tmp);
        }
        
        return ans;
    }
};