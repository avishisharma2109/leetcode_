// Last updated: 10/6/2026, 12:03:13 AM
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
    ListNode* middleNode(ListNode* head) {
         // Initialize two pointers
        ListNode* slow = head;
        ListNode* fast = head;

        // Move slow by 1 step and fast by 2 steps
        while (fast != NULL && fast->next != NULL) {

            slow = slow->next;
            fast = fast->next->next;
        }

        // Slow will be at the middle node
        return slow;
    }
};