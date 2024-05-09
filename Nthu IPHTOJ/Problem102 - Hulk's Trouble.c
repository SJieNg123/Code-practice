#include <stdio.h>
#include <stdlib.h>

int n;
int *seq;

int cmp(const void *a, const void *b)
{
    return *(int *)a - *(int *)b;
}

int find_last(int x)
{
    int l = 0, r = n - 1, result = -1;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (x == seq[mid])
        {
            result = mid;
            l = mid + 1;
        }
        else if (x < seq[mid])
            r = mid - 1;
        else
            l = mid + 1;
    }
    return result;
}

int find_first(int x)
{
    int l = 0, r = n - 1, result = -1;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (x == seq[mid])
        {
            result = mid;
            r = mid - 1;
        }
        else if (x < seq[mid])
            r = mid - 1;
        else
            l = mid + 1;
    }
    return result;
}

int main()
{
    scanf("%d", &n);
    seq = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
        scanf("%d", &seq[i]);

    qsort(seq, n, sizeof(int), cmp);
    int q;
    scanf("%d", &q);
    while (q--)
    {
        int x;
        scanf("%d", &x);
        if (find_first(x) == -1)
            printf("0\n");
        else
            printf("%d\n", find_last(x) - find_first(x) + 1);
    }
    free(seq);
    return 0;
}