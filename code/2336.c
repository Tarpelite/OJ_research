#include<stdio.h>
int main()
{
int isum=1;
int m,n,k;
scanf("%d%d",&m,&n);
for(k=1;k<=n;k++)
{isum=(isum*(m-n+k))/k;}
printf("%d",isum);
return 0;
}