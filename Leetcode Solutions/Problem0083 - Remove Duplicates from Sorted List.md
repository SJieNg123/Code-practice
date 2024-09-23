# Remove Duplicates from Sorted List

## Description
Given the head of a sorted linked list, delete all duplicates such that each element appears only once. Return the linked list sorted as well.
<br>Difficuity : Easy
<br>Topics: Linked List
<br>[Question link](https://leetcode.com/problems/remove-duplicates-from-sorted-list/description/?envType=problem-list-v2&envId=linked-list)

## Solution
Here is my solution in c
<br>Time complexity is O(n)
```C
struct ListNode* deleteDuplicates(struct ListNode* head) {
    if(head == NULL || head -> next == NULL) return head;

    struct ListNode* cur = head;
    while(cur != NULL && cur -> next != NULL)
    {
        if(cur -> val == cur -> next -> val)
        {
            struct ListNode* tmp = cur -> next;
            cur -> next = tmp -> next;
            free(tmp);
        }
        else cur = cur -> next;
    }
    return head;
}
```
