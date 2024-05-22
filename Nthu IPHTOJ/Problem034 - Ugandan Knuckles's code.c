#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
    char str[1001];
    int len;
}input;

int cmp(const void *a, const void *b)
{
    input A = *(input*)a;
    input B = *(input*)b;
    return A.len - B.len;
}

int main() 
{
    int n;
    scanf("%d", &n);
    input a[1001];
    for(int i=0; i<n; i++)
    {
        scanf("%s", a[i].str);
        a[i].len = strlen(a[i].str);
    }
    qsort(a, n, sizeof(a[0]), cmp);
    
    int ok = 1;
    for(int i=1; i<n; i++)
    {
        if(strstr(a[i].str, a[i-1].str) == NULL)
        {
            ok = 0;
            break;
        }
    }
    
    if(ok)
    {
        printf("YES\n");
        for(int i=0; i<n; i++) printf("%s\n", a[i].str);
    }
    else printf("NO\n");
    return 0;
}
