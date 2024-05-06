#include <stdio.h>

void print_binary(int ans)
{
    if (ans > 1)
        print_binary(ans / 2);
    printf("%d", ans % 2);
    return;
}

int main()
{
    int x, y;
    scanf("%x %x", &x, &y);
    int ans = x + y;
    print_binary(ans);
    printf("\n");
    return 0;
}