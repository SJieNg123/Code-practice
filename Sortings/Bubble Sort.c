#include <stdio.h>

int main()
{
    int num[] = {1, 6, 3, 2, 6, 7, 10, 15};
    // find the size of array
    int size = sizeof(num) / sizeof(int);

    // compare each and swap them
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (num[j] > num[j + 1])
            {
                int tmp = num[j];
                num[j] = num[j + 1];
                num[j + 1] = tmp;
            }
        }
    }

    // print out the result
    for (int i = 0; i < size; i++)
        printf("%d ", num[i]);
    return 0;
}