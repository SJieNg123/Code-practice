# Middle of the Linked List

## Description
Given the head of a singly linked list, return the middle node of the linked list.
If there are two middle nodes, return the second middle node.
<br>Difficuity : Easy
<br>Topics: Linked List, Two Pointers
<br>[Question link](https://leetcode.com/problems/middle-of-the-linked-list/description/)

## Solution
Here is my solution in c
<br>Time complexity is O(n)
```C
struct ListNode* middleNode(struct ListNode* head) {
    if(head == NULL || head -> next == NULL) return head;
    struct ListNode* slow = head;
    struct ListNode* fast = head;

    while(fast != NULL || fast -> next != NULL)
    {
        slow = slow -> next;
        fast = fast -> next -> next;
    }

    return slow;
}
```
