#include<stdio.h>

int main()
{
    int m, n, i;
    long long plus=1, plus1=1;
    scanf("%d %d", &m, &n);
    if(n<m/2)
    {
        for(i=1; i<n+1; i++)
        {
            plus1=plus1*i;
        }
        for(i=m-n+1; i<=m; i++)
        {
            plus=plus*i;
        }
    }
    else
    {
        n=m-n;
        for(i=1; i<n+1; i++)
        {
            plus1=plus1*i;
        }
        for(i=m-n+1; i<=m; i++)
        {
            plus=plus*i;
        }

    }
    plus=plus/plus1;
    printf("%d", plus);
    return 0;
}