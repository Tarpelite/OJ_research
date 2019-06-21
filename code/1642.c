#include <stdio.h>
int main()
{
    long long m,n,s,i;
    long long a,b,c;
    scanf("%lld%lld",&m,&n);
    a=1;
    b=1;
    c=1;
    for (i=1;i<=n;i++)
        {
        a=a*i;
    }
    for (i=1;i<=m;i++){
        b=b*i;
    }
    for (i=1;i<=(m-n);i++){
        c=c*i;
    }
    s=b/(a*c);
    printf("%lld",s);
    return 0;

}