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
        int n=0;
        while(tmp){
            tmp=tmp->next;
            n++;
        }
        ListNode *l=head,*r=head;
        int ctr=1;
        while(ctr<k){
            l=l->next;
            ctr++;
        }
        ctr=0;
        while(ctr<n-k){
            r=r->next;
            ctr++;
        }
        swap(l->val,r->val);
        return head;
    }
};