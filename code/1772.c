#include <stdio.h>

int main() {
    int m,n;
    scanf("%d%d",&m,&n);
    if(n>=m)
        printf("1");
    else if(n==0)
        printf("1");
    else
    {
    long long a=1;
    long long b=1;
    long long c=1;
    int i;
    for(i=2;i<=m;i++)
        a=a*i;
    for(i=2;i<=m-n;i++)
        b=b*i;
    for(i=2;i<=n;i++)
        c=c*i;
    int ans = a/(b*c);
    printf("%d",ans);
    }
    return 0;
}