void itr(TreeNode* root,int flag,int &ans,int deep,int &maxDeep,int targetDeep){
    if(!root)
        return;
    if(!root->left && !root->right){
        maxDeep = max(deep,maxDeep);
        if(flag==1){
            if(deep==targetDeep){
                ans+=root->val;
            }
        }
    }
    
    if(root->left)itr(root->left,flag,ans,deep+1,maxDeep,targetDeep);
    if(root->right)itr(root->right,flag,ans,deep+1,maxDeep,targetDeep);
}
class Solution {
public:
    int deepestLeavesSum(TreeNode* root) {
        int maxDeep=-1,ans=0;
        itr(root,0,ans,0,maxDeep,0);
        itr(root,1,ans,0,maxDeep,maxDeep);
        return ans;
    }
};