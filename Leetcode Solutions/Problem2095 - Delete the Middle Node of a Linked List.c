/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteMiddle(struct ListNode* head) {
    if(head == NULL || head -> next == NULL)
    {
        free(head);
        return NULL;
    }

    struct ListNode* prev = NULL;
    struct ListNode* slow = head;
    struct ListNode* fast = head;
  // use two pointer to find middle node
    while(fast != NULL && fast -> next != NULL)
    {
        prev = slow;
        slow = slow -> next;
        fast = fast -> next -> next;
    }

  // remove middle node and link the list to next node
    prev -> next = slow -> next;
    free(slow);
    return head;
}
