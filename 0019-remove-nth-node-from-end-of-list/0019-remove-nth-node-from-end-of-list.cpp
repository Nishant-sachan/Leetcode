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

        // Dummy node
        ListNode* dummy = new ListNode(0);
        dummy->next = head;

        ListNode* slow = dummy;
        ListNode* fast = dummy;

        // Move fast n+1 steps
        for (int i = 0; i <= n; i++) {
            fast = fast->next;
        }

        // Move both until fast reaches NULL
        while (fast != NULL) {
            slow = slow->next;
            fast = fast->next;
        }

        // Node to delete
        ListNode* deleteNode = slow->next;

        slow->next = deleteNode->next;

        delete deleteNode;

        return dummy->next;
    }
};