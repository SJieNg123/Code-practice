/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeElements(struct ListNode* head, int val) {
  // check if head is target val
    while(head != NULL && head -> val == val)
    {
        struct ListNode* tmp = head;
        head = head -> next;
        free(tmp);
    }

    struct ListNode* cur = head;
    struct ListNode* prev = NULL;

    while(cur != NULL)
    {
        if(cur -> val == val)
        {
            prev -> next = cur -> next;
            free(cur);
            cur = prev -> next;
        }
        else
        {
            prev = cur;
            cur = cur -> next;
        }
    }
    return head;
}
