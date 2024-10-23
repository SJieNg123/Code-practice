# Validate Binary Search Tree

## Description
Given the root of a binary tree, determine if it is a valid binary search tree (BST).
A valid BST is defined as follows:
- The left subtree of a node contains only nodes with keys less than the node's key.
- The right subtree of a node contains only nodes with keys greater than the node's key.
- Both the left and right subtrees must also be binary search trees.
<br>Difficuity : Medium
<br>Topics: Tree, BFS, DFS, Binary Tree
<br>[Question link](https://leetcode.com/problems/validate-binary-search-tree/description/)
## Solution
Here is my solution in c
<br>Time complexity is O(n)
```C
int arr[10001];
int i=0;

void inorder(struct TreeNode* root)
{
    if(root == NULL) return;
    inorder(root -> left);
    arr[i++] = root -> val;
    inorder(root -> right);
}

bool isValidBST(struct TreeNode* root) {
    i = 0;
    inorder(root);
    for(int j=0; j<i-1; j++)
    {
        if(arr[j] >= arr[j+1]) return false;
    }
    return true;
}
```
