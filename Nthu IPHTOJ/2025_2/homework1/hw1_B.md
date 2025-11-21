# after rain

## Description
Knuckles is on his way of finding his queen. When he arrived Taiwan and see a lot of rainbow flags, he wondered that these rainbow flags might be a clue of the location of his queen. He will give some operations about these flags, you are going to help him, or he'll spit on you.
There are colors on these flags. The colors include: "Red", "Orange", "Yellow", "Green", "Blue", "Purple", which are the color of rainbow.
Knuckles has a sequence of colors. Initially, the sequence is empty.
Knuckles has several operations: insert, erase1, erase2, reverse, show.
insert <color> <dest>: means insert <color> after the location of <dest>. For example, insert Yellow 5 means insert a "Yellow" after the 5-th location. If <dest> is larger than the length of the sequence, just regard it as the last location of the sequence.
erase1 <dest>: means erase the color locates at <dest>. For example, erase1 4 will erase the 4-th color in the sequence. If <dest> is larger than the length of the sequence, just regard it as the last location of the sequence.
erase2 <color>: means erase all <color> in the sequence. For example, erase2 Purple will erase all the "Purple" in the sequence. After the operation, There should be no "Purple" in the sequence.
reverse <dest1> <dest2>: means reverse the elements from dest1> to <dest2>. If the order was originally {"Yellow", "Purple", "Blue"}, after reversing, the order should become {"Blue", "Purple", "Yellow"}. If <dest1> or <dest2> is larger than the length of the sequence, just regard it as the last location of the sequence.
It's guaranteed that <dest1>
≤
≤<dest2>.
show: show the sequence according to the order.
You are going to implement a linked list that support these operations. We have implemented show operation, what you have to do is to implement the remaining operations: insert, erase1, erase2, reverse.
<br>Inputs: The first line contains an integer n, indicates the number of operations.
There are n lines below. Each line contains one operations described above. <color> will only appear the 6 colors described above. insert: 0 <= <dest> <= 10000, erase1: 1 <= <dest> <= 10000, reverse: 1 <= <dest1>, <dest2> <= 10000, 1 <= n <= 5000
<br>Outputs: When show operation is called, you should output the correct sequence after operating.
<br>Topics: Linked list
## Solution
Here is my solution in C
```C
#include <stddef.h>

void insert(Node** head, char* colour, int dest)
{
    Node* now = *head;
    while(now -> next != NULL && dest--) now = now -> next;
    Node* tmp = malloc(sizeof(Node));
    strcpy(tmp -> color, colour);
    tmp -> next = now -> next;
    now -> next = tmp;
    return;
}

void erase1(Node** head, int dest)
{
    Node* now = *head, *prev = NULL;
    if(now -> next == NULL) return;
    while(now -> next != NULL && dest--)
    {
        prev = now;
        now = now -> next;
    }
    prev -> next = now -> next;
    free(now);
    return;
}

void erase2(Node** head, char* colour)
{
    Node* now = *head, *prev = NULL;
    while(now -> next != NULL)
    {
        prev = now;
        now = now -> next;
        if(!strcmp(now -> color, colour))
        {
            prev -> next = now -> next;
            free(now);
            now = prev;
        }
    }
    return;
}

void reverse(Node** head, int dest1, int dest2)
{
    Node* now = *head, *prev = NULL, *tmp = NULL;
    int len = dest2 - dest1;
    while(now -> next != NULL && dest1--)
    {
        prev = now;
        now = now -> next;
    }
    tmp = now -> next;
    while(now -> next != NULL && len--)
    {
        now -> next = tmp -> next;
        tmp -> next = prev -> next;
        prev -> next = tmp;
        tmp = now -> next;
    }
    return;
}
```
