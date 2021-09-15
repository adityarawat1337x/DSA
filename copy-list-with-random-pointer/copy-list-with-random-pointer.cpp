/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(!head)return nullptr;
        map<Node*,Node*> mp;
        Node* itr = head;
        Node* head2 = new Node(0);
        Node* itr2 = head2;
        
        while(itr){
            itr2->val = itr->val;
            if(itr->next){
                itr2->next = new Node(0);
            }
            mp[itr]=itr2;
            itr2 = itr2->next;
            itr = itr->next;
        }
        
        itr=head;
        itr2=head2;
        
        while(itr){
            itr2->random = mp[itr->random];
            itr=itr->next;
            itr2 = itr2->next;
        }
        
        return head2;
    }
};