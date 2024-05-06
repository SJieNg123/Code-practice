#include <stdio.h>
#include <string.h>

int ans;
char input[2001];

void check(int l, int r, int len)
{
    if(input[l] == input[r])
    {
        ans++;
        if(l-1>=0 && r+1<len) check(l-1, r+1, len);
    }
    return;
}

int main()
{
    while(1)
    {
        if((scanf("%s", input)) == EOF) break;
        ans = 0;
        int len = strlen(input);
        for(int i=0; i<len; i++)
        {
            check(i, i+1, len);
            check(i, i+2, len);
        }
        printf("%d\n", ans);
    }
}