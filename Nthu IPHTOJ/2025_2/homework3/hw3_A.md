# Construct tree by inorder and preorder

## Description
This problem is partial judge! We will give you the "inorder" and "preorder" of a tree. You need to construct a tree by the "inorder" and "preorder" we give you and print the "postorder". 
There are three function you need to complete. Node* buildTree(int *inorder, int *preorder, int *inorder_start, int inorder_end*); function to construct the tree. 
void showPostorder(Node *root) function to print the postorder void freeTree(Node *root) function to free the tree Notice that the the final testcase has small memory limit. 
If you don't free your tree you will get memory limit exceeded
<br>
<br>Inputs: There are multiple testcases. The testcases will end with EOF. Each testcase contains three lines. First line only contains one integer n(1 <= n <= 100) which means the number of nodes in the tree. 
Second line contains n integers which in the range of int. Standing for the "inorder". Third line contains n integers which in the range of int. Standing for the "preorder".
<br>Outputs: For each testcase output the "postorder" of the tree.
Each number should be followed by a single blank(even the last number).
<br>Topics: Binary tree
## Solution
Here is my solution in C
```C
int preorder_index = 0;

Node* buildTree(int* Inorder, int* Preorder, int inorder_start, int inorder_end)
{
    if(inorder_start > inorder_end) return NULL;
    Node* node = malloc(sizeof(Node));
    node -> number = Preorder[preorder_index];
    preorder_index++;
    
    int root_index;
    for(root_index = inorder_start; node -> number != Inorder[root_index]; root_index++);
    node -> ptr_to_left_node = buildTree(Inorder, Preorder, inorder_start, root_index - 1);
    node -> ptr_to_right_node = buildTree(Inorder, Preorder, root_index + 1, inorder_end);
    return node;
}

void showPostorder(Node* root)
{
    if(root)
    {
        showPostorder(root -> ptr_to_left_node);
        showPostorder(root -> ptr_to_right_node);
        printf("%d ", root -> number);
    }
    return;
}

void freeTree(Node *root)
{
    if(root)
    {
        freeTree(root -> ptr_to_left_node);
        freeTree(root -> ptr_to_right_node);
        free(root);
    }
    preorder_index = 0;
    return;
}
```
