#include<stdio.h>
#include<math.h>
int main()
{
    int m,n,i,s=1;
    scanf("%d%d",&m,&n);
    if(n==0)
    printf("1");
    else
    {
    for(i=0;i<n;i++)
        s=s*(m-i);
    for(i=1;i<=n;i++)
        s=s/i;
    printf("%d",s);
    }
    return 0;
}