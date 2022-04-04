/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* tmp=head;
        ListNode *l=NULL,*r=NULL;
        while(tmp){
            r=r==NULL?NULL:r->next;
            if(--k==0){
                l=tmp;
                r=head;
            }
            tmp=tmp->next;
        }
 
        swap(l->val,r->val);
        return head;
    }
};