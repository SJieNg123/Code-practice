# Reverse Linked List

## Description
Given the head of a singly linked list, reverse the list, and return the reversed list.
<br>Difficuity : Easy
<br>Topics: Linked List, Recursion
<br>[Question link](https://leetcode.com/problems/reverse-linked-list/description/?envType=problem-list-v2&envId=recursion)

## Solution
Here is my solution in c
<br>Time complexity is O(n)
```C
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
```
