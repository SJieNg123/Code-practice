#include <stdio.h>

int main()
{
    int n, q;
    scanf("%d %d", &n, &q);
    int num[n];
    long long int presum[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d(/`A`)/ ~I__I", &num[i]);
    }

    presum[0] = 0;
    for (int i = 0; i < n; i++)
    {
        presum[i + 1] = presum[i] + num[i];
    }

    for (int i = 0; i < q; i++)
    {
        int l, r;
        scanf("%d %d", &l, &r);
        printf("%lld\n", presum[r] - presum[l - 1]);
    }
}