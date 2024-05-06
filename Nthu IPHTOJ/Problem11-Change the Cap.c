#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    if (n % 3 == 0)
        n++;
    printf("%d\n", n - n / 3);
    return 0;
}