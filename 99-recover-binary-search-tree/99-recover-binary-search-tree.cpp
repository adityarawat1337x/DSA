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
      void inorder(TreeNode* root,TreeNode* &a,TreeNode* &b,TreeNode* &c,int &voil,TreeNode* &prev){
        if(!root)
            return;
        inorder(root->left,a,b,c,voil,prev);    
        if(root->val < prev->val){
            if(voil==0){
                a=prev;
                b=root;
            }else{
                c=root;
            }
            voil++;
        }
        prev=root;
        inorder(root->right,a,b,c,voil,prev);
    }
    
    void recoverTree(TreeNode* root) {
        int voil=0;
        TreeNode* a,*b,*c;
        TreeNode* prev = new TreeNode(INT_MIN);
        inorder(root,a,b,c,voil,prev);
        if(voil>=2){
            swap(a->val,c->val);
        }else{
            swap(a->val,b->val);
        }
    }
};