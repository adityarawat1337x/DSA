/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 **/

class Solution {
public:
     pair<ListNode*,ListNode*> rev(ListNode* head,int k) {
        
        ListNode* newHead=NULL,*newTail=head;
        ListNode* tail=head;
        int i=0;
        while(tail and i++<k){
            ListNode* tmp = tail;
            tail=tail->next;
            tmp->next=newHead;
            newHead=tmp;
        }
        return {newHead,newTail};
    }
    
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(!head)
            return NULL;
        ListNode *newHead,*newTail,*tmp=head;
        int i=0;
        while(tmp and i<k){
            tmp=tmp->next;
            i++;
        }
        if(!tmp and i<k)
            return head;
        ListNode* ahead = reverseKGroup(tmp,k);
        
        auto x = rev(head,k); 
        newHead=x.first;
        newTail=x.second;
        newTail->next=ahead;
        return newHead;
    }
};