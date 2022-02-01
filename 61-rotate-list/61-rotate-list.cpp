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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head)
            return head;
        int n=0;
        ListNode* tmp=head,*last;
        while(tmp){
            n++;
            last=tmp;
            tmp=tmp->next;
        }
        
        k=k%n;
        last->next=head;
        int cnt=n-k-1;
        last=head;
        while(cnt--){
            last=last->next;
        }
        head = last->next;
        last->next=NULL;
        
        return head;
    }
};