#include <stdio.h>

int main()
{
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);
    printf("%d %d %d\n", (x - y + z) / 2, (x + y - z) / 2, (y + z - x) / 2);
    return 0;
}