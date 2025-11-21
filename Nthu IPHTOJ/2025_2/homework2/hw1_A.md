# Uncle Huang choose Tutor(Easy version)

## Description
Uncle Huang wants to find a tutor. He has n students to choose from. Students are indexed 1, 2, . . . , n and standing in a circle. 
Uncle Huang will count every k-th students in clock-wise. The k-th student is going to be chosen but the student will disappear(Nobody knows why!) therefore Uncle Huang will continue his counting and start from the next student. 
The last remaining student will be his tutor. Tell Uncle Huang the index of the student who will be his tutor. Hint - Josephus problem
<br>
<br>Inputs: The input will end by EOF Every testcase only contains two integer n(1<= n <= 1000) and k(1 <= k <= 10^9)
<br>Outputs: For each testcase print the index of the student who last remaining. remember to print \n at the end of every output.
<br>Topics: Linked list
## Solution
Here is my solution in C
```C
Node *createList(int n)
{
    Node* head = malloc(sizeof(Node)), *cur = head;
    head -> number = 1;
    head -> next = head;
    for(int i=2; i<=n; i++)
    {
        Node* new_node = malloc(sizeof(Node));
        new_node -> number = i;
        cur -> next = new_node;
        new_node -> next = head;
        cur = new_node;
    }
    return head;
}

void freeList(Node* head)
{
    free(head);
}

int solveJosephus(Node **head, int step)
{
    int len = 1;
    Node* count = (*head) -> next;
    while(count != *head)
    {
        count = count -> next;
        len++;
    }
    while(*head != (*head) -> next)
    {
        int k = (step % len - 2 + len) % len;
        for(int j=0; j<k; j++) *head = (*head) -> next;
        Node* tmp = (*head) -> next;
        (*head) -> next = tmp -> next;
        free(tmp);
        (*head) = (*head) -> next;
        len--;
    }
    return (*head) -> number;
}
```
