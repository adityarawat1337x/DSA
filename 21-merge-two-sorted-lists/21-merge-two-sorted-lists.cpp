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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* head = new ListNode(),*run;
        
        if(!list1)
            return list2;
        if(!list2)
            return list1;
        if(!list2 and !list1)
            return NULL;
        
        if(list1->val<=list2->val){
            run=list1;
            list1=list1->next;
           
        }else{
            run=list2;
            list2=list2->next;
        }
        
        head->next=run;
        
        while(list1 and list2){
            if(list1->val<=list2->val){
                run->next=list1;
                list1=list1->next;
            }else{
                run->next=list2;
                list2=list2->next;
            }
            run=run->next;
        }
        
        while(list1){
          run->next=list1;
          list1=list1->next;
          run=run->next;
        }
        while(list2){
          run->next=list2;
          list2=list2->next;
          run=run->next;
        }
        
        return head->next;
    }
};