/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        queue<Node*> q;
        Node* tmp=nullptr;
        if(!root)
            return root;
        q.push(root);
        q.push(tmp);
        while(q.size()>1 or q.front()!=tmp){
            auto x = q.front();
            q.pop();
            x->next=q.front();
            if(x->left)q.push(x->left);
            if(x->right)q.push(x->right);
            if(q.front()==tmp){
                q.pop();
                q.push(tmp);
            }
        }        
        return root;
    }
};