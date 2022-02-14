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

    void flatten(TreeNode* root) {
        if (root == nullptr) return;
        for (auto node = root; node != nullptr; node = node->right) {
            if (node->left == nullptr) continue;
            auto rightMost = node->left;
            while (rightMost->right != nullptr) rightMost = rightMost->right;
            rightMost->right = node->right;
            node->right = node->left;
            node->left = nullptr;
        }
    }
};