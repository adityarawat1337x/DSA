
class Solution {
public:
    ListNode* getMid(ListNode* head){
        ListNode* prev=NULL;
        
        while(head and head->next){
            prev = (prev)?prev->next:head;
            head=head->next->next;
        }
        
        ListNode* h = prev->next;
        prev->next = nullptr;
        return h;
    }
    
    ListNode* merge(ListNode* l1,ListNode* l2){
        ListNode* tmp = new ListNode(0);
        ListNode* ptr = tmp;
        while(l1 and l2){
            if(l1->val <l2->val){
                ptr->next=l1;
                l1=l1->next;
            }else{
                ptr->next=l2;
                l2=l2->next;
            }
            ptr=ptr->next;
        }
        
        if(l1)
            ptr->next=l1;
        else
            ptr->next=l2;
        
        return tmp->next;
    }
    
    ListNode* sortList(ListNode* head) {
        if(!head || !head->next)
            return head;
        
        ListNode* mid = getMid(head);
        ListNode* l1 = sortList(head);
        ListNode* l2 = sortList(mid);
        return merge(l1,l2);
    }
};
