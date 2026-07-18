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
    ListNode* floydDetectCycle(ListNode* &head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while (slow != NULL && fast != NULL) {
            fast = fast->next;
            if (fast != NULL) {
                fast = fast->next;
            }
            slow = slow->next;

            if (slow == fast) {
                return slow;
            }
        }
        return NULL;
    }
    ListNode *detectCycle(ListNode *head) {
        if (head == NULL || head->next == NULL) {
            return NULL;
        }

        ListNode* intersection = floydDetectCycle(head);
        if (intersection == NULL) {
            return NULL;
        }

        ListNode* slow = head;

        while (intersection != slow) {
            intersection = intersection->next;
            slow = slow->next;
        }
        return slow;
    }
};