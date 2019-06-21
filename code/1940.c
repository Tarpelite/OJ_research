#include <stdio.h>

int main()
{
    int a[100000];
    int n, k, i;
    int b, c;
    scanf("%d", &n);

    b=100000;c=0;

    while(n--)
    {
        scanf("%d", &k);
        a[k]++;
        if(k<b)
            b=k;
        if(k>c)
            c=k;
    }

    scanf("%d", &k);

    for(i=c;i>=b;i--)
    {
        if(a[i]>0)
            k--;
        if(!k)
            break;
    }

    printf("%d %d\n", i, a[i]);

    return 0;
}