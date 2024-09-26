# Binary Tree Preorder Traversal

## Description
Given the root of a binary tree, return the preorder traversal of its nodes' values.
<br>Difficuity : Easy
<br>Topics: Stack, Tree, Depth-First Search, Binary Tree
<br>[Question link](https://leetcode.com/problems/binary-tree-preorder-traversal/description/)
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
    result[(*returnSize)++] = root -> val;
    find(root -> left, result, returnSize);
    find(root -> right, result, returnSize);
}

int* preorderTraversal(struct TreeNode* root, int* returnSize) {
    *returnSize = 0;
    int* result = malloc(sizeof(int) * 100);
    find(root, result, returnSize);
    return result;
}
```
