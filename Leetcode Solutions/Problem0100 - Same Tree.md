# Same Tree

## Description
Given the roots of two binary trees p and q, write a function to check if they are the same or not.
Two binary trees are considered the same if they are structurally identical, and the nodes have the same value.
<br>Difficuity : Easy
<br>Topics: Tree, BFS, DFS, Binary Tree
<br>[Question link](https://leetcode.com/problems/same-tree/description/)
## Solution
Here is my solution in c
<br>Time complexity is O(n)
```C
bool isSameTree(struct TreeNode* p, struct TreeNode* q) {
    if(p == NULL && q == NULL) return true;
    if(p == NULL || q == NULL) return false;
    return (p -> val == q -> val) && (isSameTree(p -> left, q -> left)) && (isSameTree(p -> right, q -> right));
}
```
