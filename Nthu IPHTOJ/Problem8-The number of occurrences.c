#include <stdio.h>
#include <string.h>

int main()
{
    char a[5];
    scanf("%s", a);
    int n;
    scanf("%d", &n);
    int ans = 0, sum = 0;
    for (int i = 0; i < n; i++)
    {
        char b[10];
        scanf("%s", b);
        sum = 0;
        for (int j = 0; j <= strlen(b) - strlen(a); j++)
        {
            if (strncmp(b + j, a, strlen(a)) == 0)
                sum++;
        }
        if (sum > ans)
            ans = sum;
    }
    printf("%d", ans);
    return 0;
}