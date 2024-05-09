#include <stdio.h>

int main()
{
    int num[] = {1, 6, 3, 2, 6, 7, 10, 15};
    // find the size of array
    int size = sizeof(num) / sizeof(int);

    for (int i=0; i<size-1; i++) 
    {
        int min = i;
        for (int j=i+1; j<size; j++) 
        {
            // Find the index of the minimum element
            if (num[j] < num[min]) 
            {
                min = j;
            }
        }
        
        // Swap the found minimum element with the first element
        if (min != i) 
        {
            int tmp = num[i];
            num[i] = num[min];
            num[min] = tmp;
        }
    }

    // print out the result
    for (int i = 0; i < size; i++) printf("%d ", num[i]);
    return 0;
}
