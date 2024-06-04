#include <stdio.h>

int main()
{
    float x;
    while(scanf("%f", &x) != EOF)
    {
        for(int i=31; i>=0; i--) printf("%d", (*(int*)&x >> i) & 1);
        printf("\n");
    }
}
