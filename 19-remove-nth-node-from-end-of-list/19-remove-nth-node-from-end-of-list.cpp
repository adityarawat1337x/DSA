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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *prev=new ListNode();
        prev->next=head;
        ListNode* left=prev,*right=prev;
        
        while(n--){
            right=right->next;
        }

        while(right->next){
            right=right->next;
            left=left->next;
        }
        
        left->next=left->next->next;
        return prev->next;
    }
};