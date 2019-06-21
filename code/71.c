#include <stdio.h>
#include <stdlib.h>

int zhs(int m,int n)
{if(n==1)
return m;
if(n==m)
return 1;
return zhs(m-1,n)+zhs(m-1,n-1);
}

int main()
{
int m,n;
scanf("%d%d",&m,&n);
printf("%d",zhs(m,n));
return 0;

}