# Delete the Middle Node of a Linked List

## Description
You are given the head of a linked list. Delete the middle node, and return the head of the modified linked list.
The middle node of a linked list of size n is the ⌊n / 2⌋th node from the start using 0-based indexing, where ⌊x⌋ denotes the largest integer less than or equal to x.
For n = 1, 2, 3, 4, and 5, the middle nodes are 0, 1, 1, 2, and 2, respectively.
<br>Difficuity : Medium
<br>Topics: Linked List, Two Pointers
<br>[Question link](https://leetcode.com/problems/delete-the-middle-node-of-a-linked-list/description/)

## Solution
Here is my solution in c
<br>Time complexity is O(n)
```C
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
```
[Solution link](https://github.com/SJieNg123/Code-practice/blob/main/Leetcode%20Solutions/Problem2095%20-%20Delete%20the%20Middle%20Node%20of%20a%20Linked%20List.c)
