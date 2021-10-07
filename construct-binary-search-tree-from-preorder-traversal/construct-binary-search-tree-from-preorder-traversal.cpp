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
    TreeNode* bstFromPreorder(vector<int>& p) {
        vector<TreeNode*> st;
        TreeNode* root = new TreeNode(p[0]);
        p.erase(p.begin());
        TreeNode* ans=root;
        TreeNode* prev;
        st.push_back(root);
        for(auto i:p){
            TreeNode* node = new TreeNode(i);
            if(st.back()->val>i){
                st.back()->left=node;
                st.push_back(node);
            }else{
                while(st.size() && st.back()->val<i){
                    prev=st.back();
                    st.pop_back();
                    }
                prev->right=node;
                st.push_back(node);
            }
        }
    return ans;
    }
};