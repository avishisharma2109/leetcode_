// Last updated: 7/2/2026, 6:28:59 AM
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
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow=head;
        ListNode* fast=head;

        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;

            if(slow==fast){
                ListNode* ptr=head;
                while(ptr!=slow){//floyds cycle detection algorithm(agar random point aur head se do pointer start karoge theyll meet at head only in a cycle linked list)
                    ptr=ptr->next;
                    slow=slow->next;
                }
                return ptr;
            }
        }
        return NULL;
    }
};