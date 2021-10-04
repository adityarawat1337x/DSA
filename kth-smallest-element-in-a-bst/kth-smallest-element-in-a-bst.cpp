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
  private:
 int number = 0;
 int count = 0;

  public: int kthSmallest(TreeNode* root, int k) {
      count = k;
      helper(root);
      return number;
  }
  
   void helper(TreeNode* n) {
      if (n->left != nullptr) helper(n->left);
      count--;
      if (count == 0) {
          number = n->val;
          return;
      }
      if (n->right != nullptr) helper(n->right);
  }
};