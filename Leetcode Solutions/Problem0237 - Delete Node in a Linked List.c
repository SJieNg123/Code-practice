/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
void deleteNode(struct ListNode* node) {
    struct ListNode* cur = node;
    if(cur -> next != NULL)
    {
        cur -> val = cur -> next -> val;
        cur -> next = cur -> next -> next;
    }
}
