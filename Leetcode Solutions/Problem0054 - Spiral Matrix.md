# Spiral Matrix

## Description
Given an m x n matrix, return all elements of the matrix in spiral order.
<br>Difficuity : Medium
<br>Topics: Array, Matrix, Simulation
<br>[Question link](https://leetcode.com/problems/spiral-matrix/description/)

## Solution
Here is my solution in c, presonally hate this type of question lol
<br>Time complexity is O(m * n)
```C
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* spiralOrder(int** matrix, int matrixSize, int* matrixColSize, int* returnSize) {
    if(matrixSize == 0 || matrixColSize[0] == 0)
    {
        *returnSize = 0;
        return 0;
    }

    // for upper and lower boundery
    int top = 0, bottom = matrixSize - 1;
    // for left and right boundery
    int left = 0, right = matrixColSize[0] - 1;
    int* result = (int*)malloc(sizeof(int) * matrixSize * matrixColSize[0]);
    *returnSize = 0;

    while(top <= bottom && left <= right)
    {
        // traverse from left to right among top row
        for(int i=left; i<=right; i++) result[(*returnSize)++] = matrix[top][i];
        top++;

        // traverse from rightmost top to rightmost bottom
        for(int i=top; i<=bottom; i++) result[(*returnSize)++] = matrix[i][right];
        right--;

        // traverse from right to left among current bottom row
        if(top <= bottom)
        {
            for(int i=right; i>=left; i--) result[(*returnSize)++] = matrix[bottom][i];
            bottom--;
        }

        // traverse from leftmost bottom to leftmost top
        if(left <= right)
        {
            for(int i=bottom; i>=top; i--) result[(*returnSize)++] = matrix[i][left];
            left++;
        }
    }

    return result;
}
```
