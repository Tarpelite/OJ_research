#include "stdio.h"
int main()
{
int n;
int i;
int flag=0;
scanf("%d",&n);
n++;
for(;flag!=2;n++)
{
    flag=0;
    for (i=1;i<=n;i++)
    {
        if (n%i==0)
            flag++;
        else
            ;
    }
}
    printf("%d",n-1);
    return 0;
}