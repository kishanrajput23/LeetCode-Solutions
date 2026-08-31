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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        ListNode* prev = head;
        ListNode* curr = head->next;
        int index = 1;

        int prevCriticalPosition = 0;
        int firstCriticalPosition = 0;

        int minDiff = INT_MAX;

        while (curr->next != NULL) {
            int prev_val = prev->val;
            int curr_val = curr->val;
            int next_val = curr->next->val;

            if ((prev_val > curr_val && next_val > curr_val) || (prev_val < curr_val && next_val < curr_val)) {
                
                if (prevCriticalPosition == 0) {
                    prevCriticalPosition = index;
                    firstCriticalPosition = index;
                }
                else {
                    minDiff = min(minDiff, index - prevCriticalPosition);
                    prevCriticalPosition = index;
                }
            }
            
            index++;
            prev = curr;
            curr = curr->next;
        }

        if (minDiff == INT_MAX) {
            return {-1, -1};
        }

        return {minDiff, prevCriticalPosition - firstCriticalPosition};
    }
};