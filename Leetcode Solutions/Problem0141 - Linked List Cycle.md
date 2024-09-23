# Linked List Cycle

## Description
Given head, the head of a linked list, determine if the linked list has a cycle in it.
There is a cycle in a linked list if there is some node in the list that can be reached again by continuously following the next pointer. 
Internally, pos is used to denote the index of the node that tail's next pointer is connected to. Note that pos is not passed as a parameter.
Return true if there is a cycle in the linked list. Otherwise, return false.
<br>Difficuity : Easy
<br>Topics: Linked List, Double Pointers, Hash Table
<br>[Question link](https://leetcode.com/problems/linked-list-cycle/description/?envType=problem-list-v2&envId=linked-list)

## Solution
Here is my solution in c using two pointers
<br>Time complexity is O(n)
```C
bool hasCycle(struct ListNode *head) {
    if(head == NULL || head -> next == NULL) return false;

    struct ListNode* slow = head;
    struct ListNode* fast = head;

    while(fast != NULL && fast -> next != NULL)
    {
        slow = slow -> next;
        fast = fast -> next -> next;
        if(fast == slow) return true;
    }
    return false;
}
```
[Solution link](https://github.com/SJieNg123/Code-practice/blob/main/Leetcode%20Solutions/Problem0141%20-%20Linked%20List%20Cycle.c)
