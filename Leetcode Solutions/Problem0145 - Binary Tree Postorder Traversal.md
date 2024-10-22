# Binary Tree Postorder Traversal

## Description
Given the root of a binary tree, return the postorder traversal of its nodes' values.
<br>Difficuity : Easy
<br>Topics: Stack, Tree, Depth-First Search, Binary Tree
<br>[Question link](https://leetcode.com/problems/binary-tree-postorder-traversal/description/)
## Solution
Here is my solution in c
<br>Time complexity is O(n)
```C
void find(struct TreeNode* root, int* result, int* returnSize){
    if(root == NULL) return;
    find(root -> left, result, returnSize);
    find(root -> right, result, returnSize);
    result[(*returnSize)++] = root -> val;
}

int* postorderTraversal(struct TreeNode* root, int* returnSize) {
    *returnSize = 0;
    int* result = malloc(sizeof(int) * 100);
    find(root, result, returnSize);
    return result;
}
```
