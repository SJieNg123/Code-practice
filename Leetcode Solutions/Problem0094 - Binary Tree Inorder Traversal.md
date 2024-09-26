# Binary Tree Inorder Traversal

## Description
Given the root of a binary tree, return the inorder traversal of its nodes' values.
<br>Difficuity : Easy
<br>Topics: Stack, Tree, Depth-First Search, Binary Tree
<br>[Question link](https://leetcode.com/problems/binary-tree-inorder-traversal/description/)
## Solution
Here is my solution in c
<br>Time complexity is O(n)
```C
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
void find(struct TreeNode* root, int* result, int* returnSize)
{
    if(root == NULL) return;
    find(root -> left, result, returnSize);
    result[(*returnSize)++] = root -> val;
    find(root -> right, result, returnSize);
    return;
}

int* inorderTraversal(struct TreeNode* root, int* returnSize) {
    int* result = malloc(sizeof(int) * 100);
    *returnSize = 0;
    find(root, result, returnSize);
    return result;
}
```
