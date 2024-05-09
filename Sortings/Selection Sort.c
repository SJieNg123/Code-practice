#include <stdio.h>

int main()
{
    int num[] = {1, 6, 3, 2, 6, 7, 10, 15};
    // find the size of array
    int size = sizeof(num) / sizeof(int);

    // compare the leftmost value with others, then swap it
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (num[i] < num[j])
            {
                int tmp = num[i];
                num[i] = num[j];
                num[j] = tmp;
            }
        }
    }

    // print out the result
    for (int i = 0; i < size; i++)
        printf("%d ", num[i]);
    return 0;
}