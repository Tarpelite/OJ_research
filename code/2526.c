#include <stdio.h>
#include <stdlib.h>
long long int jiecheng_(int a)
{
    int i;
    long long int b=1;
    if (a==0)
        b=1;
    else{
    for (i=1;i<=a;i++)
    {
        b=b*i;
    }
    }
    return b;
}
int main()
{
    int n,m,ans;
    scanf ("%d%d",&m,&n);
    ans=(jiecheng_(m))/((jiecheng_(m-n))*(jiecheng_(n)));
    printf ("%d",ans);
    return 0;
}