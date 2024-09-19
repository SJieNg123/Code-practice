/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode* prev = NULL;
    struct ListNode* cur = head;
    struct ListNode* next_node = NULL;

    while(cur != NULL)
    {
        next_node = cur -> next;
        cur -> next = prev;

        prev = cur;
        cur = next_node;
    }
    return prev;
}
