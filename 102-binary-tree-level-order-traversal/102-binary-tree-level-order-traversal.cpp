class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
            std::vector<std::vector<int>> order;
        if(root == NULL){
            return order;
        }
    order.resize(1);
    std::queue<TreeNode*> queue;
    queue.push(root);
    int count = 0;
    while(!queue.empty()){

        int size = queue.size();
        for(int i = 0; i < size; i++){
            TreeNode* current = queue.front();
            queue.pop();
            order[count].push_back(current->val);
            
            if(current->left){
                queue.push(current->left);

            }
            if(current->right){
                queue.push(current->right);

            }
            
        }
        if(!queue.empty()){
            count++;
            order.resize(1 + count);
        }

    }
    return order;
        
    }
};