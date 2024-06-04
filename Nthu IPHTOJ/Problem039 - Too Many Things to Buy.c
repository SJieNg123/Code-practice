#include <stdio.h>
#include <stdlib.h>

typedef struct product
{
    int d1;
    int d2;
    int dif; // dif = d1- d2
}P;

int cmp(const void *a, const void *b)
{
    P A = *(P*)a;
    P B = *(P*)b;
    return A.dif - B.dif;
}

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    P product[100001];
    for(int i=0; i<n; i++) scanf("%d", &product[i].d1);
    for(int i=0; i<n; i++)
    {
        scanf("%d", &product[i].d2);
        product[i].dif = product[i].d1 - product[i].d2;
    }
    
    qsort(product, n, sizeof(P), cmp);
    
    long long int sum = 0;
    for(int i=0; i<n; i++)
    {
        if(product[i].dif < 0 || i<k) sum = sum + product[i].d1;
        else sum =  sum + product[i].d2;
    }
    
    printf("%lld\n", sum);
}
