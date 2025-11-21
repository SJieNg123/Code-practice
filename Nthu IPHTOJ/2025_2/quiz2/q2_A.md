Similar to [hw3_A](https://github.com/SJieNg123/Code-practice/blob/main/Nthu%20IPHTOJ/2025_2/homework3/hw3_A.md), but changed to construct tree by inorder and postorder. 
<br>Guessed solution using C, not guaranteed to be correct
```C
int postorder_index = -1;

Node* buildTree(int* Inorder, int* Postorder, int inorder_start, int inorder_end)
{
    if(postorder_index == -1) postorder_index = n - 1;
    if(inorder_start > inorder_end) return NULL;
    Node* node = malloc(sizeof(Node));
    node -> number = Postorder[postorder_index];
    postorder_index--;
    
    int root_index;
    for(root_index = inorder_start; node -> number != Inorder[root_index]; root_index++);
    node -> ptr_to_right_node = buildTree(Inorder, Postorder, root_index + 1, inorder_end);
    node -> ptr_to_left_node = buildTree(Inorder, Postorder, inorder_start, root_index - 1);
    return node;
}

void showPreorder(Node* root)
{
    if(root)
    {
        printf("%d ", root -> number);
        showPreorder(root -> ptr_to_left_node);
        showPreorder(root -> ptr_to_right_node);
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
    postorder_index = -1;
    return;
}
```
