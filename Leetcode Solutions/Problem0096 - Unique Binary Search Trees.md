# Unique Binary Search Trees

## Description
Given an integer n, return the number of structurally unique BST's (binary search trees) which has exactly n nodes of unique values from 1 to n.
<br>Difficuity : Medium
<br>Topics: Math, Dynamic Programming, Tree, Binary Search Tree, Binary Tree
<br>[Question link](https://leetcode.com/problems/unique-binary-search-trees/description/)
## Solution
Here is my solution in c
<br>Time complexity is O(n^2)
```C
int numTrees(int n) {
    int trees[n+1];
    // if n is 0 or 1, bst will be 1
    trees[0] = 1;
    trees[1] = 1;

    for(int i=2; i<=n; i++)
    {
        trees[i] = 0;
        for(int j=0; j<i; j++)
        {
            trees[i] = trees[i] + trees[j] * trees[i - j - 1];
        }
    }
    return trees[n];
}
```
