#include <stdio.h>

int main()
{
    int n, k, last_change, point1 = 0, point2, ans = 0;
    scanf("%d %d", &n, &k);
    for(int i=0; i<n; i++)
    {
        scanf("%d", &point2);
        if (point2 - point1 > k)
        {
            if (point2 - last_change > k)
            {
                printf("The Legend Falls.\n");
                return 0;
            }
            else
            {
                point1 = last_change;
                ans++;
            }
        }
        last_change = point2;
    }
    printf("%d\n", ans);
    return 0;
}
