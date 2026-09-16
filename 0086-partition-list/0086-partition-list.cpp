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
    ListNode* partition(ListNode* head, int x) {
        vector<int> v1;
        vector<int> v2;
        ListNode* temp =head;
        while(temp){
            if(temp->val<x){
                v1.push_back(temp->val);
            }
            else{
                v2.push_back(temp->val);
            }
            temp=temp->next;
        }
        v1.insert(v1.end(),v2.begin(),v2.end());
        temp =head;
        int k=0;
        while(temp){
            temp->val=v1[k++];
            temp=temp->next;
        }
        return head;
    }
};