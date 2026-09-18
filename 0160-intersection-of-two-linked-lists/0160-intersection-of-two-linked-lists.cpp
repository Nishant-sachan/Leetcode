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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {

        ListNode* pA = headA;
        ListNode* pB = headB;

        int countA = 0;
        int countB = 0;

        // Find length of A
        while (pA) {
            countA++;
            pA = pA->next;
        }

        // Find length of B
        while (pB) {
            countB++;
            pB = pB->next;
        }

        // Reset pointers
        pA = headA;
        pB = headB;

        // Move longer list pointer ahead
        if (countA > countB) {
            int diff = countA - countB;

            while (diff--) {
                pA = pA->next;
            }
        }
        else {
            int diff = countB - countA;

            while (diff--) {
                pB = pB->next;
            }
        }

        // Find intersection
        while (pA != pB) {
            pA = pA->next;
            pB = pB->next;
        }

        return pA;
    }
};