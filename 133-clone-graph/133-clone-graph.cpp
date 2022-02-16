/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
    map<int,Node*> mp;
public:

    
    Node* cloneGraph(Node* node) {
        if(!node)
            return node;
        Node* root = new Node(node->val);
        mp[root->val] = root;
        for(auto i:node->neighbors){
            if(mp.find(i->val)!=mp.end()){
                root->neighbors.push_back(mp[i->val]);
                continue;
            }
            auto x = cloneGraph(i);
            if(x)
                root->neighbors.push_back(x);
        }
        
        return root;
    }
};