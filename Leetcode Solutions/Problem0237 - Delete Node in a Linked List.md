# Delete Node in a Linked List

## Description
There is a singly-linked list head and we want to delete a node node in it.
You are given the node to be deleted node. You will not be given access to the first node of head.
All the values of the linked list are unique, and it is guaranteed that the given node node is not the last node in the linked list.
Delete the given node. Note that by deleting the node, we do not mean removing it from memory. We mean:
<br> - The value of the given node should not exist in the linked list.
<br> - The number of nodes in the linked list should decrease by one.
<br> - All the values before node should be in the same order.
<br> - All the values after node should be in the same order.
<br>Difficuity : Medium
<br>Topics: Linked list
<br>[Question link](https://leetcode.com/problems/delete-node-in-a-linked-list/description/)

## Solution
Here is my solution in c.
<br>Time complexity is O(1)
```C
void deleteNode(struct ListNode* node) {
    struct ListNode* cur = node;
    if(cur -> next != NULL)
    {
        cur -> val = cur -> next -> val;
        cur -> next = cur -> next -> next;
    }
}
```
