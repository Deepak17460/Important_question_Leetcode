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
    void deleteNode(ListNode* node) {
        // Shake of safty
        if(node->next==NULL) delete node;
        // using swaping
        swap(node->val,node->next->val);
        ListNode*temp=node->next;
        node->next=temp->next;
        delete temp;
    }
};