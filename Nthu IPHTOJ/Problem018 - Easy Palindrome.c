#include <stdio.h>

int main()
{
    int x, y;
    scanf("%d.%d", &x, &y);
    int a = x, b = y;
    int a_rev = a % 10 * 100 + a % 100 / 10 * 10 + a % 1000 / 100;
    int b_rev = b % 10 * 100 + b % 100 / 10 * 10 + b % 1000 / 100;
    int sum1 = x + a_rev;
    int sum2 = y + b_rev;
    if (sum2 >= 1000)
    {
        sum1++;
        sum2 = sum2 % 1000;
    }
    printf("%d.%d\n", sum1, sum2);
    return 0;
}
