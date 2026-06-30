// Last updated: 6/30/2026, 2:14:15 PM
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
        ListNode* dummy=new ListNode(0);//node named dummy with value 0
        ListNode* tail=dummy;
        while(list1!=NULL && list2!=NULL){
            if(list1-> val <= list2->val){
                tail->next=list1;
                list1=list1->next;
            }
            else {

                tail->next = list2;      // Attach node from list2
                list2 = list2->next;     // Move list2 forward
            }
            tail = tail->next;
        }
        if (list1 != NULL) {
            tail->next = list1;
        }
        else {
            tail->next = list2;
        }

        // Return merged list skipping dummy
        return dummy->next;
    }
};