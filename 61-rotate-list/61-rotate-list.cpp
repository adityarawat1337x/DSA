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
        ListNode* tmp=head;
        while(tmp){
            n++;
            tmp=tmp->next;
        }
        
        k=k%n;
        tmp=head;
        n=1;
        while(tmp->next){
            n++;
            tmp=tmp->next;
        }
        tmp->next=head;
        int cnt=n-k-1;
        tmp=head;
        while(cnt--){
            tmp=tmp->next;
        }
        head = tmp->next;
        tmp->next=NULL;
        
        return head;
    }
};