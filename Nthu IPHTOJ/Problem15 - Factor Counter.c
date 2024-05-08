#include <stdio.h>

int pre[20001];

void predo()
{
    for (int i = 1; i < 20001; i++)
    {
        int count = 0;
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
                count++;
        }
        pre[i] = count;
    }
    return;
}

int main()
{
    predo();
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int l, r;
        scanf("%d %d", &l, &r);
        int tmp = 0, ans = 0;
        for (int i = l; i <= r; i++)
        {
            if (pre[i] > tmp)
            {
                tmp = pre[i];
                ans = i;
            }
        }
        printf("%d\n", ans);
    }
    return 0;
}