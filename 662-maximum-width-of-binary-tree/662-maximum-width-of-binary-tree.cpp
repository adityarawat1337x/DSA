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
    int widthOfBinaryTree(TreeNode* root) {
        long ans=0,subans=0;
        if(!root)
            return ans;
        queue<pair<TreeNode*,long>> q;
        q.push({NULL,-1});
        q.push({root,0});
        long last=0;
        while(q.size()>1){
            auto x = q.front();
            q.pop();
            
            if(!x.first){
                x = q.front();
                subans = x.second;
                last = x.second;
                q.pop();
                q.push({nullptr,-1});
            }
            
            auto rt = x.first;
            auto idx = x.second;
            auto idx2 = x.second-last;
            
            if(rt->left){
                q.push({rt->left,(long)2*(long)idx2});
            }
            
            if(rt->right){
                q.push({rt->right,(long)(2*idx2+1)});
            }
            
            if(q.front().first==nullptr){
                ans = max(ans,idx-subans+1);
            }
        }
        
        return ans;
    }
};