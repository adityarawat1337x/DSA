/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int m=0,n=0;
        ListNode* tmp=headA;
        while(tmp){
            tmp=tmp->next;
            m++;
        }
        tmp=headB;
        while(tmp){
            n++;
            tmp=tmp->next;
        }
        
        if(m>n){
            int v = m-n;
            while(v--){
                headA=headA->next;
            }
        }else if(m<n){
            int v = n-m;
            while(v--){
                headB=headB->next;
            }
        }
        
        while(headA and headB){
            if(headA==headB)
                return headA;
            headA=headA->next;
            headB=headB->next;
        }
        return NULL;
    }
};