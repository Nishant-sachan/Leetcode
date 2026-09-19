/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {

        if (!head)
            return nullptr;

        // Step 1: Create copy nodes and insert them
        // Original: A -> B -> C
        // After:    A -> A' -> B -> B' -> C -> C'
        Node* temp = head;

        while (temp) {
            Node* copy = new Node(temp->val);

            copy->next = temp->next;
            temp->next = copy;

            temp = copy->next;
        }

        // Step 2: Set random pointers of copied nodes
        temp = head;

        while (temp) {
            if (temp->random)
                temp->next->random = temp->random->next;

            temp = temp->next->next;
        }

        // Step 3: Separate the two lists
        Node* copyHead = head->next;
        temp = head;

        while (temp) {
            Node* copy = temp->next;

            temp->next = copy->next;

            if (copy->next)
                copy->next = copy->next->next;

            temp = temp->next;
        }

        return copyHead;
    }
};    
