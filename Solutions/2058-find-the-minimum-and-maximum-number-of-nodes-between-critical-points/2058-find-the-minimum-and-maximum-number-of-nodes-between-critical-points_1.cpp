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
        // base condition
        if (head == NULL || head->next == NULL) {
            return {-1, -1};
        }

        vector<int> ans(2);
        vector<int> critical_points;
        int count = 1;

        ListNode* prev = head;
        ListNode* curr = head->next;

        while (curr->next != NULL) {
            int prev_val = prev->val;
            int curr_val = curr->val;
            int next_val = curr->next->val;

            if (prev_val > curr_val && next_val > curr_val) {
                critical_points.push_back(count);
            }

            if (prev_val < curr_val && next_val < curr_val) {
                critical_points.push_back(count);
            }
            
            count++;
            prev = curr;
            if (curr->next != NULL) {
                curr = curr->next;
            }
        }

        if (count <= 2 || critical_points.size() < 2) {
            return {-1, -1};
        }

        int minDiff = INT_MAX;
        for (int i = 1; i < critical_points.size(); ++i) {
            if (critical_points[i] - critical_points[i - 1] < minDiff) {
                minDiff = critical_points[i] - critical_points[i - 1];
            }
        }

        ans[0] = minDiff;

        ans[1] = critical_points[critical_points.size()-1] - critical_points[0];

        return ans;
    }
};