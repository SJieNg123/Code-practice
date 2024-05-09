#include <stdio.h>

int main()
{
    int num[] = {1, 6, 3, 2, 6, 7, 10, 15};
    // find the size of array
    int size = sizeof(num) / sizeof(int);

    for (int i = 1; i < size; i++)
    {
        int key = num[i];
        int j = i - 1;

        // move elements thet are greater than key to one position ahead
        while (j >= 0 && num[j] > key)
        {
            num[j + 1] = num[j];
            j = j - 1;
        }
        num[j + 1] = key;
    }

    // print out the result
    for (int i = 0; i < size; i++)
        printf("%d ", num[i]);
    return 0;
}