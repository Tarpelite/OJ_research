#include <stdio.h>
int main()
{
    int n = 0, i = 1, b = 0, count = 0, k = 0, a[100001] = {0};
    scanf("%d",&n);
    for(i = 1; i <= n; i++)
    {
        scanf("%d",&b);
        a[b]++;
    }
    scanf("%d",&k);
    for(i = 100001; count < k; i--)
    {
        if(a[i]!=0)
            count++;
    }
    printf("%d %d",i,a[i]);
    return 0;
}