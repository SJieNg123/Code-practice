# Reverse Linked List Elements

## Description
Given the head of a linked list and an integer val, remove all the nodes of the linked list that has Node.val == val, and return the new head.
<br>Difficuity : Easy
<br>Topics: Linked List, Recursion
<br>[Question link](https://leetcode.com/problems/remove-linked-list-elements/description/?envType=problem-list-v2&envId=recursion)

## Solution
Here is my solution in c
<br>Time complexity is O(n)
```C
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
```
