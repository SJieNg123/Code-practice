# Merge Two Sorted Lists

## Description
You are given the heads of two sorted linked lists list1 and list2.
Merge the two lists into one sorted list. The list should be made by splicing together the nodes of the first two lists.
Return the head of the merged linked list.
<br>Difficuity : Easy
<br>Topics: Linked List, Recursion
<br>[Question link](https://leetcode.com/problems/merge-two-sorted-lists/description/?envType=problem-list-v2&envId=recursion)

## Solution
Here is my solution in c
```C
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    struct ListNode* head = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* tmp = head;

    while(list1 != NULL && list2 != NULL)
    {
        if(list1 -> val < list2 -> val)
        {
            tmp -> next = list1;
            list1 = list1 -> next;
        }
        else
        {
            tmp -> next = list2;
            list2 = list2 -> next;
        }
        tmp = tmp -> next;
    }

    if(list1 != NULL) tmp -> next = list1;
    else tmp -> next = list2;

    return head -> next;
}
```
[Solution link](https://github.com/SJieNg123/Code-practice/blob/main/Leetcode/Problem0021%20-%20Merge%20Two%20Sorted%20Lists.c)
