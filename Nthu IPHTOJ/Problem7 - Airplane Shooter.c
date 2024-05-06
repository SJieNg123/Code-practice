#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int index;
    int level;
    int license;
}data;

int cmp(const void *a, const void *b)
{
    data *data1 = (data *)a;
    data *data2 = (data *)b;
    if(data1->level != data2->level) 
    {
        return data1->level - data2->level;
    }
    // If levels are the same, compare by license
    if(data1->license != data2->license) 
    {
        return data1->license - data2->license;
    }
    // If licenses are also the same, compare by index
    return data1->index - data2->index;
}

int main()
{
    int n;
    scanf("%d", &n);
    data arr[n];
    for(int i=0; i<n; i++)
    {
        arr[i].index = i+1;
        scanf("%d %d", &arr[i].level, &arr[i].license);
    }
    qsort(arr, n, sizeof(data), cmp);
    for(int i=0; i<n; i++)
    {
        if(i<n-1) printf("%d ", arr[i].index);
        else printf("%d", arr[i].index);
    }
    printf("\n");
    return 0;
}
