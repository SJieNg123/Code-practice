#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int dif;
    if(b-a == c-b)
    {
        dif = b-a;
        printf("%d %d\n", a-dif, c+dif);
    }
    else 
    {
        dif = b/a;
        printf("%d %d\n", a/dif, c*dif);
    }
    return 0;
}