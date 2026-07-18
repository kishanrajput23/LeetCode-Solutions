class Solution {
public:

    ListNode* floydDetectCycle(ListNode* head) {

        ListNode* slow = head;
        ListNode* fast = head;

        while (fast != nullptr && fast->next != nullptr) {

            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast)
                return slow;
        }

        return nullptr;
    }

    ListNode* detectCycle(ListNode* head) {

        if (head == nullptr)
            return nullptr;

        ListNode* meetingPoint = floydDetectCycle(head);

        if (meetingPoint == nullptr)
            return nullptr;

        ListNode* slow = head;

        while (slow != meetingPoint) {
            slow = slow->next;
            meetingPoint = meetingPoint->next;
        }

        return slow;
    }
};