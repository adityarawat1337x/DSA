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
    bool isPalindrome(ListNode* head) {
        ListNode *newHead,*tmp=nullptr;
        ListNode *fast=head,*slow=head;
        
        while(fast and fast->next){
            newHead=slow;
            slow=slow->next;
            fast=fast->next->next;
            newHead->next=tmp;
            tmp=newHead;
        }
        
        if(fast){
            slow=slow->next;
        }
        
        while(slow and newHead){
            if(slow->val!=newHead->val)
                return false;
            slow=slow->next;
            newHead=newHead->next;
        }
        
        return true;
        
    }
};

//odd if fast!=null  and start from  slow next;
//even if fast=null  and start from slow 