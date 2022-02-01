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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head = l1,*run=l1;
        int carry=0;
        while(l1 or l2 or carry){
            int val = carry;
            if(l1){
                val+=l1->val;
                l1=l1->next;
            }
            if(l2){
                val+=l2->val;
                l2=l2->next;
            }
            run->val = val%10;
            carry = val/10;
            if(!run->next){
                if(l2)
                    run->next=l2;
                else if(carry)
                    run->next=new ListNode();
            }
            run=run->next;
        }
        
        return head;
    }
};